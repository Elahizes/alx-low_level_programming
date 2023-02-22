#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int ch;
	int c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	ch = atoi(argv[1]);
	if (ch <= 0)
	{
		printf("0\n");
	}
	else
	{
		c += ch / 25;
		ch %= 25;
		c += ch / 10;
		ch %= 10;
		c += ch / 5;
		ch %= 5;
		c += ch / 2;
		ch %= 2;
		c += ch;
		printf("%d\n", c);
	}
	return (0);
}
