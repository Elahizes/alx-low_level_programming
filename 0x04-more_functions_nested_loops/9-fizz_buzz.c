#include <stdio.h>

/**
 * main - prints Buzz, Fizz, or FizzBuzz
 * for multiple of 3 and 5 and 3*5.
 * Return: 0 to exit
 */
int main(void)
{
	int n;

	n = 1;
	printf("%i", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %i", n);
		}
	}
	printf("\n");
	return (0);
}
