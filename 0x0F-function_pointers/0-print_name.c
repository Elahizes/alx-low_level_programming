#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that takes pointer to function
 * @name: name of the person
 * @f: pointer to function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
