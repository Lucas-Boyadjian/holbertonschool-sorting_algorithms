#include <stdio.h>
#include "sort.h"

/**
* swap - swaps two elements in an array
* @a: first element
* @b: second element
*/

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
* partition - partitions the array using lomuto scheme
* @arr: array to partition
* @low: starting index
* @high: ending index
* @size: size of the array
*
* Return: index of the pivot's final position
*/

int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];

	int i = low - 1;

	int j;

	for (j = low ; j <= high - 1 ; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
			    print_array(arr, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}
	return (i + 1);
}

/**
* quicksort_recursive - recursively implements quick sort
* @arr: array to sort
* @low: starting index
* @high: ending index
* @size: size of the array
*/

void quicksort_recursive(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);

		quicksort_recursive(arr, low, pi - 1, size);
		quicksort_recursive(arr, pi + 1, high, size);
	}
}

/**
* quick_sort - sorts an array of integers using quick sort
* @arr: array to sort
* @size: size of the array
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort_recursive(array, 0, size - 1, size);
}
