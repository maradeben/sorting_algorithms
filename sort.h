#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <stddef.h>
#include <stdbool.h>

/* define data structures */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* function declarations */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int partition(int *array, int left, int right, size_t size);
void qs(int *array, int left, int right, size_t size);
void _swap(int *array, int i, int j);
void shell_sort(int *array, size_t size);
void copy(int *src, int *dst, int size);
void merge(int *array, int *buff, int minL, int maxL, int minR, int maxR);
void printcheck(int *array, int r1, int r2);
void split(int *array, int *buff, int min, int max, int size);
void merge_sort(int *array, size_t size);

#endif /* ALGORITHMS_H */
