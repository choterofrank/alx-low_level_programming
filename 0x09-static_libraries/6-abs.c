#include "main.h"

/**
*  _abs -computes the absolute value of an integer
* @c: the absolute value
*
* Return: absolute value of an integer
*/
int _abs(int c)
{
if (c <= 0)
{
int abs_value;

abs_value = c * -1;
return (abs_value);
}
return (c);
}
