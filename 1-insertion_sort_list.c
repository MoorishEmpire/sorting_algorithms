#include "sort.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order.
 * @list: The list to be sorted.
 */
void	insertion_sort_list(listint_t **list)
{
	listint_t	*current;
	listint_t	*tmp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		tmp = current;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			swap_nodes(list, tmp->prev, tmp);
			print_list(*list);
		}
		current = current->next;
	}
}

/**
 * swap_nodes - Swaps two adjacen nodes in a doubly linked list.
 * @list: Pointer to head of the list.
 * @node1: First node.
 * @node2: Second node.
 */
void	swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (!node1 || !node2 || node1 == node2)
		return;
	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}
