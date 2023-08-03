#include "main.h"

/**
 * clear_bit - Set the value of a bit at a given index to 0.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to clear (starting from 0).
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
