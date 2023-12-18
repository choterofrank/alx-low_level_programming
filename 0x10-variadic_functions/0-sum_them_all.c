#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its paramters.
 * @n: numb of parameters inputed to function.
 * @...: A variablthat accepts limitless inputs
 *
 * Return: If n == 0 - 0 ,Otherwise - the sum of all params.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumpa;
	unsigned int x, sum = 0;

	va_start(sumpa, n);

	for (x = 0; x < n; x++)
		sum += va_arg(sumpa, int);

	va_end(sumpa);
	return (sum);
}

