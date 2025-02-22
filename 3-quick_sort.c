#include "sort.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void	quick_sort(int *array, size_t size)
{
	int	low;
	int	high;

	if (!array || size < 2)
		return;
	low = 0;
	high = size - 1;
	quick_sort_util(array, size, low, high);
}

/**
 * quick_sort_util - Recursive utility function to perform Quick Sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 * @low: The starting index of the sub-array.
 * @high: The ending index of the sub-array.
 */
void	quick_sort_util(int *array, size_t size, int low, int high)
{
	int j;

	if (low < high)
	{
		j = partioning(array, size, low, high);
		quick_sort_util(array, size, low, j - 1);
		quick_sort_util(array, size, j + 1, high);

	}
}

/**
 * partition - Partitions the array around a pivot element.
 * @array: The array to be partitioned.
 * @size: The size of the array.
 * @low: The starting index of the sub-array.
 * @high: The ending index of the sub-array.
 * Return: The index of the pivot element after partitioning.
 */
int	partioning(int *array, size_t size, int low, int high)
{
	int i;
	int j;
	int pivot;

	pivot = array[high];
	i = low;
	j = low - 1;

	while (i < high)
	{
		if (array[i] < pivot)
		{
			j++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
		i++;
	}
	if (j + 1 != high)
	{
		swap(&array[j + 1], &array[high]);
		print_array(array, size);
	}
	return (j + 1);
}

/**
 * swap - Swaps two integers.
 * @nb1: Pointer to the first integer.
 * @nb2: Pointer to the second integer.
 */
void	swap(int *nb1, int *nb2)
{
	int temp;

	temp = *nb1;
	*nb1 = *nb2;
	*nb2 = temp;
}
