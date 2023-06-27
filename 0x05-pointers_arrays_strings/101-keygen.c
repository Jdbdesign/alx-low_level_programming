#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int valid[100];
	int a, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		valid[a] = rand() % 78;
		sum += (valid[a] + '0');
		putchar(valid[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
