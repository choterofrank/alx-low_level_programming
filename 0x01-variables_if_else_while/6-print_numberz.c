#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int base_ten = '0';

	while (base_ten <= '9')
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
