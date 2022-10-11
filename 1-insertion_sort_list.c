#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 *
 * @list: pointer to pointer list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *swap;

	if (list == NULL)
		return;

	temp = NULL;
	swap = (*list)->next;

	while (swap != NULL)
	{
		temp = swap->prev;

		while (temp != NULL)
		{
			if (temp->n > swap->n)
			{
				swap->prev = temp->prev;
				temp->prev = swap;
				temp->next = swap->next;
				swap->next = temp;

				if (swap->next == NULL)
					swap->next = temp;
				if (temp->prev == NULL)
					temp->prev = swap;
				if (temp->prev == NULL)
					*list = temp;
				else if (swap->prev == NULL)
					*list = swap;
				print_list(*list);
			}
			temp = temp->prev;
		}
		swap = swap->next;
	}



}
