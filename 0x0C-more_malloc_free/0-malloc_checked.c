#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - allocates memory using malloc
* @b: the number of bytes to be allocate using malloc
* Return: a pointer to the allocated memory ,or if fails 98
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}

