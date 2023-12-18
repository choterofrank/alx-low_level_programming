#include "main.h"

/**
 * leet - encode into 1337
 * @x: input
 * Return: x
 */
char *leet(char *x)
{
	int a, b;
	char s1[] = "aAeEoOtTLl";
	char s2[] = "4433007711";

	for (a = 0; x[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (x[a] == s1[b])
			{
				x[a] = s2[b];
			}
		}
	}
	return (x);
}

