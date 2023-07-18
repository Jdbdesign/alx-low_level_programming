#include <stdlib.h>
#include "dog.h"

/**
 * _strsin - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strsin(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by bob
 * @bob: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to bob
 */
char *_strcpy(char *bob, char *src)
{
	int sin, a;

	sin = 0;

	while (src[sin] != '\0')
	{
		sin++;
	}

	for (a = 0; a < sin; a++)
	{
		bob[a] = src[a];
	}
	bob[a] = '\0';

	return (bob);
}

/**
 * new_dog -a  function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int sin1, sin2;

	sin1 = _strsin(name);
	sin2 = _strsin(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (sin1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (sin2 + 1));
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
