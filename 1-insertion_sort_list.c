#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 *                     order using the Insertion sort algorithm
 *
 * @list: pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;
	listint_t *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		current = current->next;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			prev = temp->prev;
			temp->prev = prev->prev;
			prev->next = temp->next;

			if (temp->next != NULL)
				temp->next->prev = prev;

			if (prev->prev != NULL)
				prev->prev->next = temp;
			else
				*list = temp;

			temp->next = prev;
			prev->prev = temp;

			print_list(*list);
		}
	}
}
