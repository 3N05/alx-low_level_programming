#include "main.h"
/**
 * _puts_recursion - prints a string followed by new line
 * @s: string to print
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int x = 0;

	if (s[x] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[x]);
	s++;
	_puts_recursion(s);
}
