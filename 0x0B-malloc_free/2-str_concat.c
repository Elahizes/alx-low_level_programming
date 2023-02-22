#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *tmp;

	k = 0;
	l = 0;
	if (s1 == NULL)
	{
		k = 0;
	}
	else
	{
		while (s1[k] != '\0')
		{
			k++;
		}
	}
	if (s2 == NULL)
	{
		l = 0;
	}
	else
	{
		while (s2[l] != '\0')
		{
			l++;
		}
	}
	tmp = malloc(sizeof(char) * (k + l) + 1);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
		tmp[i] = s1[i];
	for (j = 0; j < l; j++)
		tmp[i + j] = s2[j];
	tmp[i + j] = '\0';
	return (tmp);
	free(tmp);
}
