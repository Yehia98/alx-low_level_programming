#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to a linked list of a type of listint_t.
 * @index: index of the linked list node.
 * Return: nth node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
