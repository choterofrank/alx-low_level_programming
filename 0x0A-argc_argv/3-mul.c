#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted to int
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int ind, d, n, length, f, digit;

	ind = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (ind < length && f == 0)
	{
		if (s[ind] == '-')
			++d;

		if (s[ind] >= '0' && s[ind] <= '9')
		{
			digit = s[ind] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[ind + 1] < '0' || s[ind + 1] > '9')
				break;
			f = 0;
		}
		ind++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - gets the product of two numbers
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

