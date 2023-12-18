#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 * Return: Always 0
 */
int main(void)
{
	long primef = 612852475143;
	long div;

	while (div < (primef / 2))
	{
		if ((primef % 2) == 0)
		{
			primef /= 2;
			continue;
		}
		for (div = 3; div < (primef / 2); div += 2)
		{
			if ((primef % div) == 0)
				primef /= div;
		}
	}
	printf("%ld\n", primef);

	return (0);
}
