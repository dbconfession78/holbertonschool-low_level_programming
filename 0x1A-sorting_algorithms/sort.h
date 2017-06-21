#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 * @prev: Pointer to the previous element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
listint_t *create_listint(const int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *a, int *b);
int partition(int *array, int lo, int hi, size_t size);
void do_quick_sort(int *array, int lo, int hi, size_t size);
int array_cmp(int array_1[], int array_2[], size_t size);
void quick_sort_hoare(int *array, size_t size);
int node_count(listint_t **list);
void print_nodes(listint_t *pn, listint_t *walk, listint_t *nn, int expand);
#endif
