#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of linked list
 * @idx: index of the list where the new node should be added. and starts at 0
 * @n: integer to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *ptr;
	unsigned int c = 0;

	ptr = *head;
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL || head == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	while (ptr != NULL)
	{
		c++;
		if (c == idx)
		{
			tmp->next = ptr->next;
			ptr->next = tmp;
			return (tmp);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
