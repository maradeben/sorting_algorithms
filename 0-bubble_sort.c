#include "sort.h"

/**
 * bubble_sort - perform bubble sort
 * @array: pointer to array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	/* bool swapped; */

	for (i = 0; i < size - 1; i++)
	{
		/* swapped = false; */
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				/* swapped = true; */
			}
		}
		/*
		 * if (swapped == false)
		 *	break;
		 */
	}
}
