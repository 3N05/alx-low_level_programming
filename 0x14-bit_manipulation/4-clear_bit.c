#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if success, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
