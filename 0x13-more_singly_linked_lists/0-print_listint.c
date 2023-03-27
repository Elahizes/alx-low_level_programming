#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: head
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (c);
}
