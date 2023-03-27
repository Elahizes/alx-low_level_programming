#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: head of linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1 = NULL;
	listint_t *tmp2 = NULL;

	while (*head != NULL)
	{
		tmp2 = (*head)->next;
		(*head)->next = tmp1;
		tmp1 = *head;
		(*head) = tmp2;
	}
	*head = tmp1;
	return (*head);
}
