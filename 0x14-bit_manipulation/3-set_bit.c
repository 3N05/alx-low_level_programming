#include "main.h"

/**
 * set_bit - Function that sets the value of a bit
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if success or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 0x01;

	m <<= index;
	if (m == 0)
		return (-1);
	*n |= m;
	return (1);
}
