#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: an address of a pointer to the head of a dlistint_t list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->prev != NULL)
		head = head->prev;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
