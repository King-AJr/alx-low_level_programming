#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *curr;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head == new;

	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
	curr->next = new;
	}

	return (*head);
}
