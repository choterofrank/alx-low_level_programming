#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: integer matrix
 * @size: matrix size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int x, sum1 = 0, sum2 = 0;

for (x = 0; x < size; x++)
{
	sum1 += a[x];
	a += size;
}
a -= size;

for (x = 0; x < size; x++)
{
	sum2 += a[x];
	a -= size;
}
printf("%d, %d\n", sum1, sum2);
}
