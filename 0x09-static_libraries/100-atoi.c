#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int c = 0;
	int d = 0;
	int e = 0;
	int i;
	int n = 0;
	int m = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		if (s[i] == '-')
		{
			d++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			e = s[i] - 48;
			if (d % 2 == 1)
			{
				e = -e;
			}
			n = n * 10 + e;
			m++;
			if (s[i + 1] < 48 || s[i + 1] > 57)
			break;
		}
	}
	if (m == 0)
		return (0);
	return (n);
}
