#include "main.h"

int calculate_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculate_sqrt(n, 0));
}

/**
 * calculate_sqrt - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int calculate_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (calculate_sqrt(n, i + 1));
}
