#include "main.h"

/**
 * _strstr -  that locates a substring
 * @haystack: string to find
 * @needle: substring to be matched
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	if (*needle == '\0')
		return (haystack);

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			for (b = 0; needle[b] != '\0'; b++)
			{
				if (haystack[a + b] != needle[b])
					break;
			}
			if (needle[b] == '\0')
				return (&haystack[a]);
		}
	}

	return (0);
}
