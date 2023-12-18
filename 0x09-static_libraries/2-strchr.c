#include "main.h"

/**
* _strchr -  locates a character in a string
* @s: string to be searched
* @c:character tobe located
*
* Return: if char c is found a pointer to first occurance
* If char c is not found null
*/
char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] >= '\0'; a++)
{
if (s[a] == c)
{
return (s + a);
}
}
return ('\0');
}
