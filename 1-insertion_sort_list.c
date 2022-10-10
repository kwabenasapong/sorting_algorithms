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
	listint_t *head, *temp, *swap, *iter;
	int insert = 1;

	if (list == NULL)
		return;

	head = *list;
	iter = head;
	temp = NULL;
	swap = NULL;
	/**
	printf("parse to head\t");
	print_list(head);
	printf("parse to iter\t");
	print_list(iter);
	printf("temp nothing\t");
	print_list(temp);
	*/

	while (insert)
	{
		insert = 0;
		temp = head;
		printf("temp initialized\t");
		print_list(temp);
		swap = head->next;
		printf("swap initialized\t");
		print_list(swap);

		while (iter)
		{
			if (head->n > swap->n)
			{
				head->prev = swap->prev;
				head->next = swap->next;
				swap->prev = temp->prev;
				swap->next = temp->next;
				insert = 1;
			}
			iter = iter->next;
		}
		print_list(*list);
	}



}
