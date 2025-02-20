#include <stdlib.h>
#include <unistd.h>
#include "sort.h"

/*
 * bubble_sort - sorts and array of integers in ascending order.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void	bubble_sort(int *array, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int	swap;
	int	nbr;

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
					nbr = array[k];
					if (nbr > 9)
						ft_putchar(nbr / 10 + '0');
					ft_putchar(nbr % 10 + '0');
					if (k < size - 1)
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					else
						ft_putchar('\n');
					k++;
				}
			}
			j++;
		}
		i++;
	}
}

/**
 * ft_putchar - Write a charater to stdout.
 * @c: The character to be written.
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
