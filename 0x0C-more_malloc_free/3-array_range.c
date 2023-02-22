#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -  creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to the new string created (Success), or NULL (Error)
 **/
int *array_range(int min, int max)
{
	int i;
	int *tmp;

	if (min > max)
		return (NULL);
	tmp = malloc(sizeof(int) * (max - min + 1));
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		tmp[i] = i + min;
	return (tmp);
}
