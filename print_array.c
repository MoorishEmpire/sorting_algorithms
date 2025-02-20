#include <stdlib.h>
#include <stdio.h>

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
