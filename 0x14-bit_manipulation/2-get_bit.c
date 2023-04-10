#include "main.h"

/**
 * get_bit - Function that returns the value of a bit
 * @n: Number to get bit from
 * @index: Given index for the bit
 * Return: The value of the bit or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 0x01;

	m <<= index;
	if (m == 0)
		return (-1);

	if ((n & m))
		return (1);
	else
		return (0);
}
