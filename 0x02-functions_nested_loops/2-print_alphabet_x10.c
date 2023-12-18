#include "main.h"

/**
 * print_alphabet_x10 -Print the alphabets 10times
 * Return:void
 */
void print_alphabet_x10(void)
{
	char alph;
	int times;

	for (times = 1; times <= 10; times++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
