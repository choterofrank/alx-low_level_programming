#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: the buffer
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int o, x, y;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		x = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (y = 0; y < 10; y++)
		{
			if (y < x)
				printf("%02x", *(b + o + y));
			else
				printf("  ");
			if (y % 2)
			{
				printf(" ");
			}
		}
		for (y = 0; y < x; y++)
		{
			int c = *(b + o + y);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}

