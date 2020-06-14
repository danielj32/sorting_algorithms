#include "sort.h"
/**
 * insertion_sort_list - builds the final sorted array or list
 * @list: list of integers
 */

void insertion_sort_list(listint_t **list)
{
	      listint_t *new_node, *pt, *aux;

	if (list == NULL)
		return;
	if (*list == NULL)
		return;
	new_node = *list;

	if (new_node->next == NULL)
		return;
	while (new_node->next)
	{
		pt = new_node->next;

		if (new_node->n > pt->n)
		{
			aux = new_node;
			while (aux && aux->n > pt->n)
			{
				aux->next = pt->next;
				if (aux->next)
					aux->next->prev = aux;
				pt->prev = aux->prev;
				if (pt->prev)
					pt->prev->next = pt;
				else
					*list = pt;
				aux->prev = pt;
				pt->next = aux;
				print_list(*list);
				aux = pt->prev;
			}
			continue;
		}
		new_node = new_node->next;
	}
}
