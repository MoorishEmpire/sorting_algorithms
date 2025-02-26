#include "sort.h"
#include <stdio.h>

/**
 * print_list - Prints the entire list.
 * @list - Pointer to the head of the list.
 */
void	print_list(const listint_t *list)
{
	while (list)
	{
		printf("%d", list->n);
		if (list->next)
			printf(", ");
		list = list->next;
	}
	printf("\n");
}
