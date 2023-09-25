#include "sort.h"
#include <stdlib.h>

void swap_node(listint_t **list, listint_t *ptr);

/**
 * insertion_sort_list - sorts a double linked list using
 * the insertion sort algorith
 *
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *ptr;
	int swapped = 0;

	if (!list || !(*list) || (*list)->next == NULL)
		return;
	tmp = *list;
	ptr = *list;
	while (tmp->next)
	{
		ptr = tmp;
		swapped = 0;
		while (ptr)
		{
			if (ptr->n < ptr->next->n)
				break;
			swap_node(list, ptr);
			print_list(*list);
			ptr = ptr->prev->prev;
			swapped = 1;
		}
		if (!swapped)
			tmp = tmp->next;
	}
}

/**
 * swap_node - Swaps a node
 * @list: head node
 * @ptr: Node to swap with its adjacent
 */

void swap_node(listint_t **list, listint_t *ptr)
{
	listint_t *tmp = ptr->next;

	tmp->prev = ptr->prev;
	ptr->next = tmp->next;
	ptr->prev = tmp;
	tmp->next = ptr;

	if (ptr->next)
		ptr->next->prev = ptr;
	if (tmp->prev)
		tmp->prev->next = tmp;
	else
		(*list) = tmp;
}
