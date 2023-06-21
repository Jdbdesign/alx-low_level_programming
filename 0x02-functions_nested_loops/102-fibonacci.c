#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int a = 1, b = 2, next;

	printf("%ld, %ld", a, b);
	for (i = 3; i <= 50; i++)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
