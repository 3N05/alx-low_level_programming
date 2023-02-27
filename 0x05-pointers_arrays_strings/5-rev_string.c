#include "main.h"
/**
 * rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int k, h, l;
	char j;

	for (k = 0; s[k] != '\0'; k++)
		;

	l = k;
	for (k--, h = 0; h < l / 2; k--, h++)
	{
		j = s[h];
		s[h] = s[k];
		s[k] = j;
	}
}
