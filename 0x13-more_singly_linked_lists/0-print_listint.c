#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: points to a linked list of a type of listint_t.
 * Return: n
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
