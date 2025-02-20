#include <stdlib.h>
#include <stdio.h>

/*
 * print_array - Prints the array of integers.
 * @array: The array to be printed.
 * @size: The size of this array.
 */
void	print_array(int *array, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(" ");
		else
			printf("\n");
		i++;
	}
}
