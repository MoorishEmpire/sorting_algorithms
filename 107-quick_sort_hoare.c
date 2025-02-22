#include "sort.h"
#include <stddef.h>

/**
 * swap - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/**
 * partitioning_hoare - Partitions the array using the Hoare partition scheme.
 * @array: The array to be partitioned.
 * @size: The size of the array.
 * @low: The starting index of the sub-array.
 * @high: The ending index of the sub-array.
 * Return: The index of the pivot element after partitioning.
 */
int partitioning_hoare(int *array, size_t size, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = array[high];

	i = low - 1;
	j = high + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i >= j)
			return (i);

		swap(&array[i], &array[j]);
		print_array(array, size);
	}
}

/**
 * quick_sort_hoare_util - Recursive utility function to perform Quick Sort
 * using Hoare partition scheme.
 * @array: The array to be sorted.
 * @size: The size of the array.
 * @low: The starting index of the sub-array.
 * @high: The ending index of the sub-array.
 */
void quick_sort_hoare_util(int *array, size_t size, int low, int high)
{
	int	pivot_index;

	if (low < high)
	{
		pivot_index = partitioning_hoare(array, size, low, high);
		quick_sort_hoare_util(array, size, low, pivot_index - 1);
		quick_sort_hoare_util(array, size, pivot_index, high);
	}
}

/**
 * quick_sort_hoare - Sorts an array of integers in ascending order
 * using the Quick sort algorithm with Hoare partition scheme.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_hoare_util(array, size, 0, size - 1);
}
