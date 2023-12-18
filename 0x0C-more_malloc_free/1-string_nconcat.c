#include "main.h"
#include <stdlib.h>

/**
* *string_nconcat - concatenates two strings
* @s1: the string that content is added to
* @s2: the string that is being concatenated to the first string
* @n: the number of bytes of string2 to concatenate to string1
* Return: pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cats;
unsigned int x = 0, y = 0, leng1 = 0, leng2 = 0;

while (s1 && s1[leng1])
leng1++;
while (s2 && s2[leng2])
leng2++;

if (n < leng2)
cats = malloc(sizeof(char) * (leng1 + n + 1));
else
cats = malloc(sizeof(char) * (leng1 + leng2 + 1));

if (!cats)
return (NULL);

while (x < leng1)
{
cats[x] = s1[x];
x++;
}

while (n < leng2 && x < (leng1 + n))
cats[x++] = s2[y++];

while (n >= leng2 && x < (leng1 + leng2))
cats[x++] = s2[y++];

cats[x] = '\0';

return (cats);
}
