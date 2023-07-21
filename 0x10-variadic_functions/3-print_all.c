#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int b = 0;
	char *bin, *sin = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[b])
		{
			switch (format[b])
			{
				case 'c':
					printf("%s%c", sin, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sin, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sin, va_arg(list, double));
					break;
				case 's':
					bin = va_arg(list, char *);
					if (!bin)
						bin = "(nil)";
					printf("%s%s", sin, bin);
					break;
				default:
					b++;
					continue;
			}
			sin = ", ";
			b++;
		}
	}

	printf("\n");
	va_end(list);
}
