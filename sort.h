#ifndef SORT_H
#define SORT_H

#include <stddef.h>

void	ft_putchar(char c);
void	bubble_sort(int *array, size_t size);
void	print_array(int *array, size_t size);

typedef struct listint_s listint_t;
struct listint_s
{
	int		n;
	listint_t	*next;
	listint_t	*prev;
};

void		insertion_sort_list(listint_t **list);
listint_t	*create_listint(const int *array, size_t size);
void		print_list(const listint_t *list);
void		swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);

#endif
