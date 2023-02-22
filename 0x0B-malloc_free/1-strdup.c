#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates an array of chars
 * @str: string to be copied
 * Return: value of NULL.
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *tmp;

	j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	tmp = malloc(sizeof(char) * j + 1);
	if (tmp == NULL)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			tmp[i] = str[i];
		}
		tmp[i] = '\0';
		return (tmp);
		free(tmp);
	}
}
