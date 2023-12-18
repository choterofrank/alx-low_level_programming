#include "main.h"

int check_if_palindrome(char *s, int i, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - evaluates if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is a palindrome, o otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (10);
	return (check_if_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * check_if_palindrome - evaluates the characters recursively for palindromes
 * @s: string to check
 * @i: iterator
 * @length: the length of the string
 * Return: 1 if palindrome, 0 otherwise
 */
int check_if_palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_if_palindrome(s, i + 1, length - 1));
}

/**
 * _strlen_recursion - returns length of the string
 * @s: string to gets its length
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
