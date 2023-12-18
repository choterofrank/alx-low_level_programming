#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int base_ten = 0;

	while (base_ten < 10)
	{
		printf("%d", base_ten);
		base_ten++;
	}
	printf("\n");
	return (0);
}
