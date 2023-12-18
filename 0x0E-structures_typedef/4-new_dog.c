#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);


/**
* new_dog - creates a new dog
* @name: name of the new dog
* @age: the age  of the a new dog
* @owner: the owner of the new dog
*
* Return: pointer to the new dog, NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int lg1, lg2;
dog_t *dog;

lg1 = _strlen(name);
lg2 = _strlen(owner);

dog = malloc(sizeof(dog_t));

if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (lg1 + 1));

if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (lg2 + 1));

if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}


/**
* *_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* @dest: pointer to the buffer where to copy the string
* @src: the string to copy
*
* Return: the pointer to buffer to cp string
*/
char *_strcpy(char *dest, char *src)
{
int lg, x;
lg = 0;

while (src[lg] != '\0')
{
lg++;
}

for (x = 0; x < lg; x++)
{
dest[x] = src[x];
}
dest[x] = '\0';
return (dest);
}


/**
* _strlen - evaluates and returns the length of a string
* @s: string whose length is to be checked
*
* Return: the length of the inputed string
*/
int _strlen(char *s)
{
int  lg = 0;

while (s[lg] != '\0')
{
lg++;
}
return (lg);

}


