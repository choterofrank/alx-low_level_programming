#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int hash, len;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (len = size - hash; len > 0; len--)
			{
				_putchar(' ');
			}
			for (len = 0; len < hash; len++)
			{
				_putchar('#');
			}
			if (hash == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
