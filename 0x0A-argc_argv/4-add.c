#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, j;
	int k = 0;
	int c = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (((argv[i][j]) < '0' || (argv[i][j] > '9')) && (argv[i][j] != '-'))
			{
				c++;
			}
		}
		k += atoi(argv[i]);
	}
	if (c == 0)
	{
		printf("%d\n", k);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
