#include <stdio.h>
#include "lists.h"

/**
 * print_list - takes a the head of a linked list
 * and prints the strings of all the elements of the list
 *
 * @h: head of list
 * Return: return number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t i
	i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		i;
		h = h->next;
	}

	return (i);
}
