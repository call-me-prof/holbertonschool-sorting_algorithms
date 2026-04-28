#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: A pointer to the head of a doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			insert->next = iter->next;
			if (iter->next != NULL)
				iter->next->prev = insert;
			iter->prev = insert->prev;
			iter->next = insert;
			if (insert->prev != NULL)
				insert->prev->next = iter;
			else
				*list = iter;
			insert->prev = iter;
			print_list((const listint_t *)*list);
			insert = iter->prev;
		}
	}
}
