#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy of new memory space location
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{

	char *pm;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	pm = malloc(sizeof(char) * (x + 1));

	if (pm == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		pm[y] = str[y];

	return (pm);

}

