#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;
while (*str++)
{
len++;
}
return (len);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int index = 0;
for (index = 0; src[index] != '\0'; index++)
{
dest[index] = src[index];
}
dest[index] = '\0';
return (dest);
}


/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;
if (name == NULL || age < 0 || owner == NULL)
{
return (NULL);
}
doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
{
return (NULL);
}
doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}
doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggo->owner == NULL)
{
free(doggo->name);
free(doggo);
return (NULL);
}
doggo->name = _strcpy(doggo->name, name);
doggo->owner = _strcpy(doggo->owner, owner);
doggo->age = age;
return (doggo);
}
