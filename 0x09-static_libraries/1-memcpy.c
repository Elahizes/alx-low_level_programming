#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory to filled
 * @src: memory to be copied
 * @n: the size of the memory to copied
 * Return: pointer to the memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
