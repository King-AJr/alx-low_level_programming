#include "lists.h"
/**
 * add_nodeint_end - add node to end of linked list
 * @head: pointer to head of list
 * @n: data ro be stored in new node
 * Return: return address to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
