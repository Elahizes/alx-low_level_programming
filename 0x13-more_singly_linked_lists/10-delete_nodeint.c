#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position
 * @head: head of linked list
 * @index: index of the list where the new node should be added and starts at 0
 *
 * Return: the address of the new node, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *tmp = *head;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (ptr != NULL)
	{
		c++;
		if (c == index)
		{
			tmp = ptr->next;
			ptr->next = tmp->next;
			free(tmp);
			return (1);
		}
		ptr = ptr->next;
	}
	return (-1);
}
