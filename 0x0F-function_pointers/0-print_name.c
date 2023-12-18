#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: a letter of the name to print
 * @f: pointer to function(print_name)
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

