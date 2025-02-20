#include <stdlib.h>
#include <unistd.h>
#include "sort.h"

/**
 * bubble_sort - sorts and array of integers in ascending order.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void	bubble_sort(int *array, size_t size)
{
	size_t	i;
	size_t	j;
	int	temp;
	int	swapped;

	if (!array || size < 2)
		return;
	i = 0;
	while (i < size - 1)
	{
		swapped = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			break;
		i++;
	}
}

