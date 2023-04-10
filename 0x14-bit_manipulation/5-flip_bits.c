#include "main.h"

/**
 * flip_bits - Function that returns the number of bits flipped
 * @n: Flips needed to equal m for n
 * @m: The number to set other equal
 * Return: Number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, count = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		c = e >> h;
		if (c & 1)
			count++;
	}
	return (count);
}
