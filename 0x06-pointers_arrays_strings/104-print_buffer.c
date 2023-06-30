#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int u, v, w;

	u = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (u < size)
	{
		v = size - u < 10 ? size - u : 10;
		printf("%08x: ", u);
		for (w = 0; w < 10; w++)
		{
			if (w < v)
				printf("%02x", *(b + u + w));
			else
				printf("  ");
			if (w % 2)
			{
				printf(" ");
			}
		}
		for (w = 0; w < v; w++)
		{
			int c = *(b + u + w);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		u += 10;
	}
}
