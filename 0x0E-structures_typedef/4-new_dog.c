#include "dog.h"
#include <stdlib.h>

int strleng(char *s);
char *strcopy(char *dest, char *src);

/**
 * new_dog - creates new dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenn, leno;

	lenn = strleng(name);
	leno = strleng(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenn + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (leno + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	strcopy(dog->name, name);
	strcopy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

/**
 * strlen - returns length of a string
 * s: given string
 * Return: length
 */
int strleng(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * *strcopy - copies string
 * @dest: pointer to buffer to copy string
 * @src: string to be copied
 * Return: pointer to dest
 */
char *strcopy(char *dest, char *src)
{
	int len, a;
	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
