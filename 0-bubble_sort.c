#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts and array of integers in assscending order.
 * array: The array to be sorted.
 * size: The size of the array.
 */
void	bubble_sort(int *array, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int swap;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				k = 0;
				while (k < size)
				{
					printf("%d", array[k]);
					if (k < size - 1)
						printf(" ");
					else
						printf("\n");
					k++;
				}
			}
			j++;
		}
		i++;
	}
}
