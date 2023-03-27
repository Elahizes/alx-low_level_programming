#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: head of linked list
 * @str: string to be added
 *
 * Return: the number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
