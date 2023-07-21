#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: The count of arguments supplied to the function.
 * @...: Calculate the sum by utilizing varying parameters.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list b;
	unsigned int a, sum = 0;

	va_start(b, n);

	for (a = 0; a < n; a++)
		sum += va_arg(b, int);

	va_end(b);

	return (sum);
}
