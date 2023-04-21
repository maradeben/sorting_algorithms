#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: array to sort
 * @size: size of array
 * Return: no return
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_j;
	int min;
	bool found_min;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		found_min = false;
		for (j = i; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				min_j = j;
				found_min = true;
			}
		}
		if (found_min == true)
		{
			array[min_j] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
