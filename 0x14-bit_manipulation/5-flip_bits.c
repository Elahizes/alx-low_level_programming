#include <stdio.h>
#include "main.h"
/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int c = 0;

	x = n ^ m;
	while (x > 0)
	{
		x &= (x - 1);
		c++;
	}

	return (c);
}
