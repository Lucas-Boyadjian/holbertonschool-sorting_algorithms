#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using the
 *                  Selection sort algorithm.
 * @array: Pointer to the array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: This function iterates through the array multiple times,
 *              comparing adjacent elements and swapping them if they are
 *              in the wrong order. The process is repeated until the array
 *              is sorted.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index_mini;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		index_mini = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index_mini])
				index_mini = j;
		}
			if (index_mini != i)
			{
				tmp = array[i];
				array[i] = array[index_mini];
				array[index_mini] = tmp;

				print_array(array, size);
			}
	}
}
