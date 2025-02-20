#include "sort.h"
#include <stdlib.h>
#include <unistd.h>

/*
 * print_array - Prints the array of integers.
 * @array: The array to be printed.
 * @size: The size of this array.
 */
void	print_array(int *array, size_t size)
{
	size_t	i;
	int	nbr;

	i = 0;
	while (i < size)
	{
		nbr = array[i];
		if (nbr > 9)
			ft_putchar(nbr / 10 + '0');
		ft_putchar(nbr % 10 + '0');
		if (i < size - 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		else
			ft_putchar('\n');
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
