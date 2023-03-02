#include "main.h"
/**
 * string_toupper - change a string to upper case
 * @s: pointer to a string
 * Return: s
 */

char *string_toupper(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] >= 'a' && s[k] <= 'z')
		{
			s[k] = s[k] - 32;
		}
		++k;
	}
	return (s);
}
