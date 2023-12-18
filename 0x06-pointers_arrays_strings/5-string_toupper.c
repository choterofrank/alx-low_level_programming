#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @x: pointer
 * Return: x
 */
char *string_toupper(char *x)
{
	int y;

	y = 0;
	while (x[y] != '\0')
	{
		if (x[y] >= 'a' && x[y] <= 'z')
			x[y] = x[y] - 32;
		y++;
	}
	return (x);
}

