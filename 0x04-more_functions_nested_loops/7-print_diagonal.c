#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, c;

		for (a = 0; a < n; a++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == a)
					_putchar('\\');
				else if (c < a)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
