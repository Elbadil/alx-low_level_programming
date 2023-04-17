#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - To calculate the length of a string
 * @s: Our string parameter
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int l;

	for (l = 0 ; s[l] != '\0';)
		l++;
	return (l);
}

/**
 * _strcpy - Copy string from src to dest
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - to create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;
	int i, j;

	i = _strlen(name);
	j = _strlen(owner);

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);

	dog2->name = malloc(sizeof(char) * (i + 1));
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->owner = malloc(sizeof(char) * (j + 1));
	if (dog2->owner == NULL)
	{
		free(dog2);
		free(dog2->name);
		return (NULL);
	}
	_strcpy(dog2->name, name);
	_strcpy(dog2->owner, owner);
	dog2->age = age;

	return (dog2);
}
