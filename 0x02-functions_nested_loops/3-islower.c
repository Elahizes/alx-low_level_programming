#include "main.h"
/**
 * _islower - check if alphabet is lower case
 * @c: place holder
 * Return: 0 or 1 to exit
 *
 */

int _islower(int c)
{
	if (c >= 97 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
