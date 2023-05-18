#include "sort.h"

/**
 * 
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (!list)
		return;
	
	a = *list;
	
	while (a)
	{
		
		while (a->next && (a->next->n < a->n))
		{
			b = a->next;
			a->next = b->next;
			b->prev = a->prev;

			if(a->prev)
			{
				a->prev->next = b;
			}
			if (b->next)
			{
				b->next->prev = a;
			}
			a->prev = b;
			b->next = a;
			if (b->prev)
				a = b->prev;
			else
				*list = b;
	
			print_list(*list);
		}
		a = a->next;
	}
}
