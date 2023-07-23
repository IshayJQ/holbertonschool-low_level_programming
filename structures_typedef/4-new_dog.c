#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string pointer to char
 * Return: not return
 */

int _strlen(char *s)
{
	int length;

	for (length = 0 ; s[length] != '\0' ; length++)
	{
	}
	return (length);
}

/**
 * *_strcpy - prints every other character of a string
 * @src: pointer to a string
 * @dest: pointer to a string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	dest = p;
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner for the dog
 * Return: the new dog data
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pet;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	pet = malloc(sizeof(dog_t));
	if (pet == NULL)
		return (NULL);
	pet->name = malloc(sizeof(char) * (length1 + 1));
	if (pet->name == NULL)
	{
		free(pet);
		return (NULL);
	}
	pet->owner = malloc(sizeof(char) * (length2 + 1));
	if (pet->owner == NULL)
	{
		free(pet);
		free(pet->name);
		return (NULL);
	}
	_strcpy(pet->name, name);
	_strcpy(pet->owner, owner);
	pet->age = age;
	return (pet);
}
