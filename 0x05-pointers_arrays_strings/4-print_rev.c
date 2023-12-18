#include "main.h"

/**
 * print_rev -prints a string, in reverse
 * @s: the string to print to print in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;
	int c;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (c = l; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

