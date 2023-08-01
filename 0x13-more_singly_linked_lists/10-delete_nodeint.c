#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index.
 * @head: pointer to a linked list of a type of listint_t
 * @index: index of a node.
 * Return: 1 for success, -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp2;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (; i < (index - 1); i++)
	{
		if (!temp || !(temp->next))
		{
			return (-1);
		}
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
