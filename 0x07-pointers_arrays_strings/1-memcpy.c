#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: to memory
 * @src: the bytes from the memory area
 * @n: function copies
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

