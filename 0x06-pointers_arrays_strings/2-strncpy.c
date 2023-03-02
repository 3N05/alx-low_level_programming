#include "main.h"
/**
 * _strncpy - copies one string (or bytes given)
 * @dest: where to copy;
 * @src: string to copy or bytes to copy
 * @n: how many bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k, j;

	k = 0;
	j = 0;
	while (k != n)
	{
		dest[j] = src[k];
		if (src[k] == '\0')
		{
			dest[j] = '\0';
			break;
		}
		j++;
		k++;
	}
	while (j != n)
		dest[j++] = '\0';
	return (dest);
}
