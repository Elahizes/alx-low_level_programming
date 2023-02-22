#include "main.h"
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * @i: type int
 * Return: 1 if n is a prime number, 0 if not
 */
int prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));

}

/**
 * prime - check prime number
 * @n: type int
 * @i: type int
 * Return: Function about prime numbers
 **/
int prime(int n, int i)
{
	if (i < n)
	{
	if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
	}
	return (1);
}
