#include "main.h"

/**
 * print_binary - Function that prints a binary number
 * @n: Number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int h, count = 0;
	unsigned long int c;

	for (h = 63; h >= 0; h--)
	{
		c = n >> h;

		if (c & 1)
		{
			_putchar ('1');
			count++;
		}
		else if (count)
			_putcbar ('0');
	}
	if (!count)
		_putchar('0');
}
