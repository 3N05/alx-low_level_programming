#include "main.h"

/**
 * flip_bits - Function that returns the number of bits flipped
 * @n: Flips needed to equal m for n
 * @m: The number to set other equal
 * Return: Number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f = 0;
	unsigned long int d = (n ^ m);
	unsigned long int k = 0x01;

	while (k <= d)
	{
		if (k & d)
			f++;
		k <<= 1;
	}
	return (f);
}
