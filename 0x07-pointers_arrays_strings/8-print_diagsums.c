#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[(size * i) + i];
		s2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", s1, s2);
}
