#include <stdio.h>

/**
 * main -locates and prints sum of even numbered terms
 *
 * Return:Always 0
 */
int main(void)
{
	int a;
	unsigned long int b, c, d, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		d = b + c;
		b = c;
		c = d;
	}

	printf("%lu\n", sum);

	return (0);
}

