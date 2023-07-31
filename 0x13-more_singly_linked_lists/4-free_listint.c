#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: points to a linked list of a type of listint_t.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
