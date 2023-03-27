#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: the address of memory to filled
 * @n: the size of the memory to filled
 * @b: the constant value to be copied
 *
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
