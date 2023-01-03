#include "sort.h"

/**
 * swap - Short description
 * @tall: first member
 * @low: second member
 * @head: third member
 *
 * Return: void.
 */
void swap(listint_t *tall, listint_t *low, listint_t **head)
{
	if (low->next != NULL)
		low->next->prev = tall;

	tall->next = low->next;
	low->next = tall;
	low->prev = tall->prev;

	if (tall->prev == NULL)
		*head = low;
	else
		tall->prev->next = low;

	tall->prev = low;
}

/**
 *
 *
 *
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *back = NULL, *key;

	if (!list || !(*list) || !((*list)->next))
		return;

	for (key = *list; key; key = key->next)
	{
		key = *list;
		while (back->prev && back->prev->n > back->n)
		{
			swap(back->prev, back, list);
		}
	}
}

