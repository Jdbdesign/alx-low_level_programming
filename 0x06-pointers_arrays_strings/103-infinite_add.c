#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: is the first number
 * @n2: is the second number
 * @r: is the buffer that the function will use to store the result
 * @size_r:  is the buffer size
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2, sum, carry, a;
	char *ptr1, *ptr2;

	num1 = strnum(n1);
	num2 = strnum(n2);

	if (num1 + 1 > size_r || num2 + 1 > size_r)
		return (0);

	ptr1 = n1 + num1 - 1;
	ptr2 = n2 + num2 - 1;
	carry = 0;
	a = 0;

	while (ptr1 >= n1 || ptr2 >= n2 || carry)
	{
		sum = carry;

		if (ptr1 >= n1)
			sum += *ptr1-- - '0';

		if (ptr2 >= n2)
			sum += *ptr2-- - '0';

		r[a++] = sum % 10 + '0';
		carry = sum / 10;
	}
	r[a] = '\0';

	for (int e = 0, d = a - 1; e < d; e++, d--)
	{
		char temp = r[c];

		r[e] = r[d];
		r[d] = temp;
	}

	return (r);
}
