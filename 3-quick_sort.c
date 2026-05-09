#include "sort.h"

/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Lomuto partition scheme
 * @array: array to sort
 * @size: size of array
 * @low: starting index
 * @high: ending index
 *
 * Return: partition index
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot, i, j;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}

	return (i);
}

/**
 * quick_sort_recursive - recursive quick sort
 * @array: array to sort
 * @size: size of array
 * @low: starting index
 * @high: ending index
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, size, low, high);

		quick_sort_recursive(array, size, low, pivot - 1);
		quick_sort_recursive(array, size, pivot + 1, high);
	}
}

/**
 * quick_sort - sorts an array using quick sort
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, size, 0, size - 1);
}
