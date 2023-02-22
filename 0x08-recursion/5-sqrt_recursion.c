#include "main.h"
/**
 * _sqrt_recursion -  Returns the natural square root of a number.
 * @n: int type
 * @i: int type
 * Return: char type
 **/
int sq(int n, int i);

int _sqrt_recursion(int n)
{
	return (sq(n, 0));
}

/**
 * sq - entry to _sqrt_recursion function.
 * @n: int type
 * @i: int type
 * Return: square value
 **/
int sq(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (sq(n, i + 1));
}
