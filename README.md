# Holberton - Sorting Algorithms & Big O 📊

Ce dépôt contient les projets que j'ai réalisés dans le cadre du cursus "Sorting Algorithms & Big O" de Holberton School. Il s'agit d'une immersion dans les algorithmes de tri classiques et l'analyse de leur efficacité à l'aide de la notation Big O.

---

## 📁 Contenu du dépôt

| Projet | Description |
|--------|-------------|
| [`0-bubble_sort`](https://github.com/rpokman/holbertonschool-sorting_algorithms/tree/main/0-bubble_sort.c) | Implémentation de l'algorithme de tri **Bubble Sort** |
| [`1-insertion_sort_list`](https://github.com/rpokman/holbertonschool-sorting_algorithms/tree/main/1-insertion_sort_list.c) | Implémentation de l'algorithme de tri **Insertion Sort** sur une liste doublement chaînée |
| [`2-selection_sort`](https://github.com/rpokman/holbertonschool-sorting_algorithms/tree/main/2-selection_sort.c) | Implémentation de l'algorithme de tri **Selection Sort** |
| [`3-quick_sort`](https://github.com/rpokman/holbertonschool-sorting_algorithms/tree/main/3-quick_sort.c) | Implémentation de l'algorithme de tri **Quick Sort** (schéma de partitionnement Lomuto) |

---

## 🧠 Compétences développées

- Conception et implémentation de plusieurs algorithmes de tri (Bubble, Insertion, Selection, Quick).
- Analyse de la complexité temporelle des algorithmes à l'aide de la notation **Big O**.
- Manipulation de tableaux d'entiers et de listes doublement chaînées.
- Compréhension des cas de base, moyen et pire pour évaluer l'efficacité des algorithmes.
- Utilisation de `gcc` pour la compilation et respect du style Betty pour la propreté du code.

---

## ⚙️ Compilation

Chaque fichier source peut être compilé de la manière suivante. Par exemple, pour l'algorithme **Quick Sort** :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick_sort