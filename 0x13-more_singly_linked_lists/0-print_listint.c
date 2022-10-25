#include "lists.h"

/**
 * print_listint - prints all the elements in a linked list
 * @h: hea of list
 * Return: number of elements in a linked list
 */

size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
