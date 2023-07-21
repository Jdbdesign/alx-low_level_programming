#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: Various strings to be printed in a variable manner
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *sin;
	unsigned int a;

	va_start(strings, n);

	for (a = 0; a < n; a++)
	{
		sin = va_arg(strings, char *);

		if (sin == NULL)
			printf("(nil)");
		else
			printf("%s", sin);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
