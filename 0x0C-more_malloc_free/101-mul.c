#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"

int check_digit(char *s);
int _strlen(char *s);
void errors(void);


/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments vector
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
char *s1, *s2;
int lg1, lg2, lg, x, cf, dig1, dig2, *result, y = 0;

s1 = argv[1], s2 = argv[2];

if (argc != 3 || !check_digit(s1) || !check_digit(s2))
errors();

lg1 = _strlen(s1);
lg2 = _strlen(s2);
lg = lg1 + lg2 + 1;

result = malloc(sizeof(int) * lg);

if (!result)
return (1);
for (x = 0; x <= lg1 + lg2; x++)
result[x] = 0;
for (lg1 = lg1 - 1; lg1 >= 0; lg1--)
{
dig1 = s1[lg1] - '0';
cf = 0;
for (lg2 = _strlen(s2) - 1; lg2 >= 0; lg2--)
{
dig2 = s2[lg2] - '0';
cf += result[lg1 + lg2 + 1] + (dig1 *dig2);
result[lg1 + lg2 + 1] = cf % 10;
cf /= 10;
}
if (cf > 0)
result[lg1 + lg2 + 1] += cf;
}
for (x = 0; x < lg - 1; x++)
{
if (result[x])
y = 1;
if (y)
_putchar(result[x] + '0');
}
if (!y)
_putchar('0');
_putchar('\n');
free(result);

return (0);
}


/**
* errors - handles errors for main function
*/
void errors(void)
{
printf("Error\n");
exit(98);
}


/**
* _strlen - evalutes the length of a string
* @s: string whose length is to be checked
*
* Return: length of the string
*/
int _strlen(char *s)
{
int x = 0;

while (s[x] != '\0')
{
x++;
}
return (x);
}




/**
* check_digit - evalutes if a string contains a non-digit character
* @s: the string to be evaluated
*
* Return: 0 if non-digit is found, 1 otherwise
*/
int check_digit(char *s)
{
int x = 0;

while (s[x])
{
if (s[x] < '0' || s[x] > '9')
return (0);
x++;
}
return (1);
}



