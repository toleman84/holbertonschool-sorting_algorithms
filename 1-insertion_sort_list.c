#include "sort.h"

/**
 * swap - Short description
 * @tall: first member
 * @low: second member
 * @head: third member
 *
 * Return: void.
 */
void swap(listint_t **head, listint_t **tall, listint_t *low)
{
	(*tall)->next = low->next;

	if (low->next != NULL)
		low->next->prev = *tall;

	low->prev = (*tall)->prev;
	low->next = *tall;

	if ((*tall)->prev != NULL)
		(*tall)->prev->next = low;
	else
		*head = low;

	(*tall)->prev = low;
	*tall = low->prev;

	print_list(*head);
}

/**
 * insertion_sort_list - Short description
 * @list: first member
 *
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *in, *key, *temp;

	if (!list || !(*list) || !((*list)->next))
		return;

	for (key = (*list)->next; key != NULL; key = temp)
	{
		temp = key->next;
		in = key->prev;

		while (in != NULL && key->n < in->n)
		{
			swap(list, &in, key);
		}
	}
}

