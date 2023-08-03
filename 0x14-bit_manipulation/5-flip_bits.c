#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to change from one number to
 * another
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit_count = 0;
	unsigned long int xor_result = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		if ((xor_result >> i) & 1)
			bit_count++;
	}

	return (bit_count);
}
