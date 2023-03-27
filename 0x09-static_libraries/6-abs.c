#include "main.h"
/**
 * _abs - absolute number
 * @n: place holder of integer
 * Return: n return the result
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	else
	{
		n = n;
	}
	return (n);
}
