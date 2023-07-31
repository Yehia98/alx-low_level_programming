#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * list.
 * @head: points to a linked list of a type of listint_t.
 * @n: integer to be inserted in nodes.
 * Return: a pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
