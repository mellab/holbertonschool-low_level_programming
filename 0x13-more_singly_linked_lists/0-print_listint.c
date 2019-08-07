#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
