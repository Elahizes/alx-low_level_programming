#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		if ((n & 1))
			printf("1");
		else
			printf("0");
	}
	else
	{
		putchar('0');
	}
}
