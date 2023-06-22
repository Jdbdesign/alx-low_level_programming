#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int b;
	long int top;
	long int a;

	b = 612852475143;
	top = -1;

	while (b % 2 == 0)
	{
		top = 2;
		b /= 2;
	}

	for (a = 3; a <= sqrt(n); a = a + 2)
	{
		while (b % a == 0)
		{
			top = a;
			b = b / a;
		}
	}

	if (b > 2)
		top = b;

	printf("%ld\n", top);

	return (0);
}

