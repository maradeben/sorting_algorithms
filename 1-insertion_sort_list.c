#include "sort.h"

/**
 * insertion_sort_list - perform insertion sort
 * on doubly linked list
 * @list: pointer to head of list
 * Return: no return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *front, *back;

	if (list == NULL || (*list)->next == NULL)
		return;
	back = *list;
	while (back->next != NULL)
	{
		front = back->next;
		temp = front;
		if (front->n < back->n)
		{
			back->next = front->next;
			front->next = back;
			front->prev = back->prev;
			back->prev = front;
			
			print_list(*list);
			while (back->prev != NULL && front->n < back->n)
			{
				back->next = front->next;
				front->next = back;
				front->prev = back->prev;
				back->prev = front;

				print_list(*list);
			}
		}
		back = temp;
	}
}
