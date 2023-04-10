#include "main.h"

/**
 * print_binary - Function that prints a binary number
 * @n: Number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int f = 0, m = 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (m)
	{
		if (f == 1 && (n & m) == 0)
			_putchar('0');
		else if ((n & m) != 0)
		{
			_putchar('1');
			f = 1;
		}
		m >>= 1;
	}
}
