#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @j: the int to extract the last digit from
 * Return: the value of the last digit
 */

int print_last_digit(int j)
{
	int i;

	if (j < 0)
	j = -j;

	i = j % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}
