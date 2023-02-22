#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @c: char
 * @size: the size of the memory to print
 *
 * Return: value of NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tmp;

	if (size > 0)
	{
		tmp = malloc(sizeof(char) * size);
		if (tmp == NULL)
		{
			return ('\0');
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				tmp[i] = c;
			}
			return (tmp);
			free(tmp);
		}
	}
	else if (size == 0)
	{
		return ('\0');
	}
	return (0);
}
