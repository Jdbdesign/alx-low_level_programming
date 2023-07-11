#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int sin, a, b;

	sin = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			sin = 0;
		else if (sin == 0)
		{
			sin = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - function that splits a string into words.
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **top, *kit;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	top = (char **) malloc(sizeof(char *) * (words + 1));
	if (top == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				kit = (char *) malloc(sizeof(char) * (c + 1));
				if (kit == NULL)
					return (NULL);
				while (start < end)
					*kit++ = str[start++];
				*kit = '\0';
				top[k] = kit - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	top[k] = NULL;

	return (top);
}
