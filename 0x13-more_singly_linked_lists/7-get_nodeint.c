#include "lists.h"

/**
 * get_nodeint_at_index - get a node of specified index in a linked list
 * @head: head of linked list
 * @index: index of node to fetch
 * Return: return address of the node if it doesnt exist return null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	i = 0;
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}

	if (head == NULL)
		return (NULL);

	return (head);
}
