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
* selection_sort - Sorts an array of integers in ascending order
*                  using the Selection sort algorithm
* @array: Array to sort
* @size: Number of elements in the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, a;
	int tmp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		a = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[a])
				a = j;
		}
		if (a != i)
		{
			tmp = array[i];
			array[i] = array[a];
			array[a] = tmp;
			print_array(array, size);
		}
	}
}
