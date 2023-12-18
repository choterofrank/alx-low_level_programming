#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
