#include "main.h"
/**
 * print_last_digit - absolute number
 * @n: place holder
 * Return: n return the value
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = x * -1;
	}
	_putchar (x + '0');
	return (x);
}
