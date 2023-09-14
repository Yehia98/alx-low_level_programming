#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * Description: a function that prints all the elements of a d_linked list.
 * @h: address of a pointer to the head of a dlistint_t list.
 * Return: the number of elements in a dlistint_t list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
