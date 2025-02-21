#ifndef SORT_H
#define SORT_H

#include <stddef.h>

void	ft_putchar(char c);
void	bubble_sort(int *array, size_t size);
void	print_array(int *array, size_t size);

typedef struct listint_s listint_t;

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @next: Pointer to the next element in the list
 * @prev: Pointer to the previous element in the list
 *
 * Description: Doubly linked list structure used for sorting algorithms.
 */
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
void		selection_sort(int *array, size_t size);

#endif
