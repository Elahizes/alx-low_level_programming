#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings up to n
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * @n: length of s2 to be concated
 * Return: pointer to the new string created (Success), or NULL (Error)
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *tmp;

	k = 0;
	l = 0;
	if (s1 == NULL)
		k = 0;
	else
		while (s1[k] != '\0')
			k++;
	if (s2 == NULL)
		l = 0;
	else
		while (s2[l] != '\0')
			l++;
	if (n >= l)
		n = l;
	tmp = malloc(sizeof(char) * (k + n + 1));
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
		tmp[i] = s1[i];
	for (j = 0; j < n; j++)
		tmp[j + k] = s2[j];
	tmp[j + k] = '\0';
	return (tmp);
}
