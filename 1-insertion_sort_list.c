#include "sort.h"

/**
* swap_nodes - Swaps two adjacent nodes in a doubly linked list
* @list: Double pointer to the head of the list
* @left: Node before (must precede right)
* @right: Node after (must follow left)
*/
void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	if (left->prev)
		left->prev->next = right;
	else
		*list = right;

	if (right->next)
		right->next->prev = left;

	right->prev = left->prev;
	left->next = right->next;
	right->next = left;
	left->prev = right;
}

/**
* insertion_sort_list - Sorts a doubly linked list of integers
* @list: Double pointer to the head of the list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		tmp = current;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			swap_nodes(list, tmp->prev, tmp);
			print_list(*list);
		}
		current = current->next;
	}
}
