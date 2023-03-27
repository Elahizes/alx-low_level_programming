#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - return the sum of all the data (n) of a listint_t linked list
 * @head: head of linked list
 *
 * Return: 0 if the list is empty or the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
