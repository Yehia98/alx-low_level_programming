#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: points to a pointer points to a linkedlist of a type listint_t.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
