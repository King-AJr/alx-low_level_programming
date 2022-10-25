#include "lists.h"

/**
 * sum_listint - return the sum of all data(n) in a linked list
 * @head: head of linked list
 * Return: return sum of lisked list if list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + (head->n);

		head = head->next;
	}

	return (sum);
}
