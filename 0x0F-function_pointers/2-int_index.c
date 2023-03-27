#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @size: the number of elements in the array array
 * @array: given array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
		if (size <= 0)
			return (-1);
	}
	return (-1);
}
