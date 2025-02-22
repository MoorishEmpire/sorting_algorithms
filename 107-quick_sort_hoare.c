#include "sort.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * quick_sort_hoare - Sorts and array of integers in ascending order
 * using the Quick sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void	quick_sort_hoare(int *array, size_t size)
{
	int	low;
	int	high;

	if (!array || size < 2)
		return;
	low = 0;
	high = size - 1;
	quick_sort_hoare_util(array, size, low, high);
}

/**
 * quick_sort_hoare_util - Recursive utility function to perform Quick Sort
 * using Hoare partition scheme.
 * @array: The array to be sorted.
 * @size: The size of the array.
 * @low: The starting index of the sub-array.
 * @high: The ending index of the sub-array.
 */
void	quick_sort_hoare_util(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pivot_index;

		pivot_index = partitioning_hoare(array, size, low, high);
		quick_sort_hoare_util(array, size, low, pivot_index - 1);
		quick_sort_hoare_util(array, size, pivot_index + 1, high);
	}
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

	pivot = array[(low + high) / 2];

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
			return (j);

		swap(&array[i], &array[j]);
		print_array(array, size);
	}
}

/**
 * swap - Swaps two integers.
 * @nb1: Pointer to the first integer.
 * @nb2: Pointer to the second integer.
 */
void	swap(int *nb1, int *nb2)
{
	int	swap;

	swap = *nb1;
	*nb1 = *nb2;
	*nb2 = swap;
}
