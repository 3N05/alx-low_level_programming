#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */

void print_rev(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
		;

	for (k--; k >= 0; k--)
		_putchar(s[k]);

	_putchar('\n');
}
