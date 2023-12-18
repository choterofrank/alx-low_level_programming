#include <stdlib.h>
#include "main.h"

/**
* *_realloc - reallocates a memory block using malloc and free
* @ptr: a pointer to the memory previsouly allocated by malloc func
* @old_size: the size of the allocated memory for the pointer
* @new_size: the new size of the new memory block
* Return: pointer to the newly allocated memory block, NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *pt;
char *old_pt = ptr;
unsigned int x, ns = new_size;

if (ptr == NULL)
{
pt = malloc(new_size);
return (pt);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);

pt = malloc(new_size);

if (pt == NULL)
return (NULL);
if (new_size > old_size)
{
ns = old_size;
for (x = 0; x < ns; x++)
{
pt[x] = old_pt[x];
}
}

free(ptr);
return (pt);
}


