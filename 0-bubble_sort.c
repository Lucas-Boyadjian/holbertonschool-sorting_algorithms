#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 *               Bubble sort algorithm.
 * @array: Pointer to the array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: This function iterates through the array multiple times,
 *              comparing adjacent elements and swapping them if they are
 *              in the wrong order. The process is repeated until the array
 *              is sorted.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - i - 1  ; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > (array[j + 1]))
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;

				print_array(array, size);
			}
		}
	}
}
