#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *strg;
	unsigned int x;

	va_start(strings, n);

	for (x = 0; x < n; x++)
	{
		strg = va_arg(strings, char *);

		if (strg == NULL)
			printf("(nil)");
		else
			printf("%s", strg);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

