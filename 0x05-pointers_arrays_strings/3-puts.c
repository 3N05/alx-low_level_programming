#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 */

void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
