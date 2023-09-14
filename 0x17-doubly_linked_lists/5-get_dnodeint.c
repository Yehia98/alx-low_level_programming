#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a dlistint_t
 * linked list.
 * @head: address of a pointer to the head of dlistint_t list.
 * @index: the index of the node, starting from 0.
 * Return: the node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index; i++)
	{
		head = head->next;
	}
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
