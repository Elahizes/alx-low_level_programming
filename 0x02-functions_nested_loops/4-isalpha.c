#include "main.h"
/**
 * _isalpha - check if it is alphabet
 * @c: place holder
 * Return: 0 or 1 to exit
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c < 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
