#include "main.h"

/**
 * print_times_table -  prints the n times table
 * @n: no of which the times table is from
 *
 * Return: int
 */
void print_times_table(int n)
{
	int num, mult, pro;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				pro = num * mult;
				if (pro <= 99)
				{
					_putchar(' ');
				}
				if (pro <= 9)
				{
					_putchar(' ');
				}
				if (pro >= 100)
				{
					_putchar((pro / 100) + '0');
					_putchar(((pro / 10)) % 10 + '0');
				}
				else if (pro <= 99 && pro >= 10)
				{
					_putchar((pro / 10) + '0');
				}
					_putchar((pro % 10) + '0');
				}
			_putchar('\n');
		}
	}
}

