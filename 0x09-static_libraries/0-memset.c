#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: memory area to be filled
* @b: the char to copy
* @n: the number of times to copy char b
*
* Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
