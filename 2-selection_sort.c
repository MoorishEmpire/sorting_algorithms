#include "sort.h"
#include <stdlib.h>

/**
 * selection_sort - Sorts an array of integers in ascendign orger
 * using the selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void	selection_sort(int *array, size_t size)
{
	int	swap;
	size_t	index_min;
	size_t	i;
	size_t	j;

	if (!array || size < 2)
		return;
	i = 0;
	while (i < size)
	{
		index_min  = i;
		j = i + 1;
		while (j < size)
		{
			if (array[index_min] > array[j])
				index_min = j;
			j++;
		}
		if (index_min != i)
		{
			swap = array[i];
			array[i] = array[index_min];
			array[index_min] = swap;
			print_array(array, size);
		}
		i++;
	}
}
