#include "main.h"
/**
 * print_alphabet_x10 - Check main
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';

		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
		_putchar('\n');
	}
}
