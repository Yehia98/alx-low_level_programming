#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: double pointer to the first element in the linked list
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if ((head == NULL) || (*head == NULL))
	{
		return (0);
	}
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
