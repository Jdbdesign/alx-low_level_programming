#include <stdio.h>

/**
 * main - Prints the alphabet in lower
 * and theen in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowerandupper[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(lowerandupper[i]);
	}
	putchar('\n');
	return (0);
}
