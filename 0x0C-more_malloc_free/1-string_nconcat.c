#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, sin1 = 0, sin2 = 0;

	while (s1 && s1[sin1])
		sin1++;
	while (s2 && s2[sin2])
		sin2++;

	if (n < sin2)
		s = malloc(sizeof(char) * (sin1 + n + 1));
	else
		s = malloc(sizeof(char) * (sin1 + sin2 + 1));

	if (!s)
		return (NULL);

	while (a < sin1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < sin2 && a < (sin1 + n))
		s[a++] = s2[b++];

	while (n >= sin2 && a < (sin1 + sin2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
