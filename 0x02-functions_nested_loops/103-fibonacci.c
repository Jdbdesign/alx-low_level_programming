#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	long int a = 1, b = 2, next;
	long int sum = 2;
	
	while (1)
	{
		next = a + b;
		if (next > 4000000)
			break;
		if (next % 2 == 0)
			sum += next;
		a = b;
		b = next;
	}
	printf("%ld\n", sum);
	return (0);
}
