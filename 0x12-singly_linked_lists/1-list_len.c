#include <stdio.h>
#include <string.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
