#include <stdio.h>
#include "sort.h"

/**
* swap - swaps two elements in an array
* @a: first element
* @b: second element
* @array: array being sorted
* @size: size of the array
*/

void swap(int *a, int *b, int *array, size_t size)
{
	if (*a != *b)
	{
		int temp;

		temp = *a;
		*a = *b;
		*b = temp;
		print_array(array, size);
	}
}

/**
* partition - partitions the array using lomuto scheme
* @array: array to partition
* @low: starting index
* @high: ending index
* @size: size of the array
*
* Return: index of the pivot's final position
*/

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low ; j < high ; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
				swap(&array[i], &array[j], array, size);
		}
	}
	if (i + 1 != high)
		swap(&array[i + 1], &array[high], array, size);
	return (i + 1);
}

/**
* quicksort_recursive - recursively implements quick sort
* @array: array to sort
* @low: starting index
* @high: ending index
* @size: size of the array
*/

void quicksort_recursive(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);

		quicksort_recursive(array, low, pi - 1, size);
		quicksort_recursive(array, pi + 1, high, size);
	}
}

/**
* quick_sort - sorts an array of integers using quick sort
* @array: array to sort
* @size: size of the array
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort_recursive(array, 0, size - 1, size);
}
