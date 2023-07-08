#include "main.h"
/**
 * _strpbrk - that searches a string for any of a set of bytes.
 * @s: string to find
 * @accept: bytes to be matched
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}
