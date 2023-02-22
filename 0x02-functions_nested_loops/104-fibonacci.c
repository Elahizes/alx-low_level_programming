#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, j1, j2, k, k1, k2, n, n1, n2;

	j = 1;
	k = 2;
	for (i = 1; i <= 90; i++)
	{
		if (i == 1)
		{
			printf("%lu", j);
		}
		else
		{
			printf(", %lu", j);
		}
		n = j + k;
		j = k;
		k = n;
	}
	j1 = j / 10000000000;
	j2 = j % 10000000000;
	k1 = k / 10000000000;
	k2 = k % 10000000000;
	n1 = n / 10000000000;
	n2 = n % 10000000000;
	for (i = 91; i <= 98; i++)
	{
		printf(", %lu", j1  + (j2 / 10000000000));
		printf("%lu", j2 % 10000000000);
		n1 = k1 + j1;
		j1 = k1;
		k1 = n1;
		n2 = k2 + j2;
		j2 = k2;
		k2 = n2;
	}
	printf("\n");
	return (0);
}
