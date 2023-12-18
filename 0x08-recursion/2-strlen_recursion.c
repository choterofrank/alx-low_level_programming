#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to print its length
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
