#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, n, len, f, digit;

	a = 0;
	b = 0;
	n = 0;
	nb = 0;
	d = 0;
	num = 0;

	while (s[nb] != '\0')
		nb++;

	while (a < nb && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (n);
}
