#include "main.h"
/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
		;

	return (k);
}
