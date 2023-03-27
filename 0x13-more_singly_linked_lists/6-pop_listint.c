#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	if (*head == NULL)
		return (0);
	tmp = *head;
	(*head) = (*head)->next;
	x = tmp->n;
	free(tmp);
	return (x);
}
