#include "lists.h"

/**
 * pop_listint - deletes the head of listint_t linked list
 * @head: pointer pointing to the head of the list
 * Return: return 0 is list if empty else return head data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int j;

	if (*head == NULL)
		return (0);

	temp = (*head);
	j = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (j);
}
