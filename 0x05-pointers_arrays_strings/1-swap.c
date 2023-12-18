#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: values to be swaped
 * @b:value to be swaped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

