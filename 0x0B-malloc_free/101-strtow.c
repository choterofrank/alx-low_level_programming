#include <stdlib.h>
#include "main.h"

/**
 * word_count - counts the number of words
 * @s: the string to be split
 * Return: numb of words in a string
 */
int word_count(char *s)
{
	int flag, ct, nw; /*nw is the number of words*/

	flag = 0;
	nw = 0;

	for (ct = 0; s[ct] != '\0'; ct++)
	{
		if (s[ct] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			nw++;
		}
	}
	return (nw);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: NULL if str == NULL or str == "",
 * NULL if function fails
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, y = 0, leng = 0, words, c = 0, start, end;

	while (*(str + leng))
		leng++;

	words = word_count(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);
	for (x = 0; x <= leng; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (c + 1));

				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - c;
				y++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = x;
	}
	matrix[y] = NULL;
	return (matrix);
}

