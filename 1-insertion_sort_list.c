#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 *                     order using the Insertion sort algorithm
 * @list: pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		current = current->next;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			listint_t *prev = temp->prev;
			listint_t *next = temp->next;

			if (prev->prev != NULL)
				prev->prev->next = temp;
			temp->prev = prev->prev;

			if (next != NULL)
				next->prev = prev;
			prev->next = next;

			temp->next = prev;
			prev->prev = temp;

			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
		}
	}
}
