#include "main.h"

/**
 * get_bit - Function that returns the value of a bit
 * @n: Number to get bit from
 * @index: Given index for the bit
 * Return: The value of the bit or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
