#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *bull;
	int b, c = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;

	bull = malloc(sizeof(char) * (b + 1));

	if (bull == NULL)
		return (NULL);

	for (c = 0; str[c]; c++)
		bull[c] = str[c];

	return (bull);
}
