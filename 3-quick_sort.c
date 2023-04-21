#include "sort.h"

/**
 * quick_sort - implement quick sort algorithm
 * @array: the array to sort
 * @size: size of array
 * Return: no return
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	qs(array, 0, size - 1, size);
}

/**
 * partition - Lomuto partition scheme
 * @array: array to partition
 * @left: left index
 * @right: right index
 * @size: size of array
 * Return: the index of pivot
 */
int partition(int *array, int left, int right, size_t size)
{
	int i = left, j = right - 1;
	int pivot = array[right], temp;

	while (i < j)
	{
		/* find first item >= pivot */
		while (array[i] < pivot)
			i++;
		/* find last item < pivot */
		while (j > left && array[j] >= pivot)
			j--;

		/* if greater item is left of lesser, swap */
		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
			print_array(array, size);
		}
	}

	if (i == j && array[i] < pivot)
		i++;
	
	if (array[i] != pivot)
	{
		temp = array[i];
		array[i] = array[right];
		array[right] = temp;
		print_array(array, size);
	}
	return (i);
}

/**
 * qs - quick sort
 * @array: array to sort
 * @left: left index
 * @right: right index
 * @size: size of array
 * Return: no return
 */
void qs(int *array, int left, int right, size_t size)
{
	int pivot;

	if (left >= right)
		return;
	pivot = partition(array, left, right, size);
	qs(array, left, pivot - 1, size);
	qs(array, pivot + 1, right, size);
}
