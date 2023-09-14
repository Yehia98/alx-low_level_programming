#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: address of a pointer of the head of a dlistint_t list.
 * Return: the sum of all the data (n) of a dlistint_t list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
