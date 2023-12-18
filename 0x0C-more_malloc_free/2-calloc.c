#include "main.h"
#include <stdlib.h>

/**
* *_memset - it fills the memory with a constant byte
* @s: the memory area to be filled with the constant byte
* @b: character to copy
* @n: the number of times to copy the character b
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}

return (s);
}


/**
* *_calloc - allocates memory for an array using malloc
* @nmemb: the number of elements in the array
* @size: the size of each element in the array
*
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);

return (ptr);
}
