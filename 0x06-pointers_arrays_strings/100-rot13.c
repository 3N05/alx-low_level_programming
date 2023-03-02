#include "main.h"
/**
 * rot13 - caesers cipher
 * @s: pointer to an array of words
 *
 * Return: s
 */

char *rot13(char *s)
{
	int a, b;

	char nose[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char res[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; nose[b] != '\0'; b++)
		{
			if (s[a] == nose[b])
			{
				s[a] = res[b];
				break;
			}
		}
	}
	return (s);
}
