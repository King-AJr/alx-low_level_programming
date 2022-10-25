#include "lists.h"

/**
 *insert_nodeint_at_index - insert node at a specified index
* @head: pointer to head of a linked list
* @idx: index to insert node
* @n: data to store in new node
*Return: return index of new node or null in case of error
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *copy = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	for (i = 0; i < (idx - 1); i++)
	{
		if (copy == NULL)
			return (NULL);
		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
