#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *sin;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	sin = malloc(sizeof(char) * (a + b + 1));

	if (sin == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		sin[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		sin[a] = s2[b];
		a++, b++;
	}
	sin[a] = '\0';
	return (sin);
}
