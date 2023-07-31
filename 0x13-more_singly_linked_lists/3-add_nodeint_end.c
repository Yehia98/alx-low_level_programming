#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: points to a linklist of a type of listint_t.
 * @n: integer being added to the linked list.
 * Return: a pointer to a new node at the end of the linklist.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
