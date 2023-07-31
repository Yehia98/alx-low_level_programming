#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: points to a linked list of a type of listint_t.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
