#include "lists.h"

/**
 * listint_len - prints number of elements in a linked list
 * @h: head of list
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
