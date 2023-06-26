#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		longi++;
	}
	a = longi - 1;
	for (c = 0 ; c <= a ; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}
