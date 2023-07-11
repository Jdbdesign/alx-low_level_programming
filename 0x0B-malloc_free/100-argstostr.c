#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, n, b = 0, l = 0;
	char *sin;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
			l++;
	}
	l += ac;

	sin = malloc(sizeof(char) * l + 1);
	if (sin == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (n = 0; av[a][n]; n++)
	{
		sin[b] = av[a][n];
		b++;
	}
	if (sin[b] == '\0')
	{
		sin[b++] = '\n';
	}
	}
	return (sin);
}
