#include "lists.h"

size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while(h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
