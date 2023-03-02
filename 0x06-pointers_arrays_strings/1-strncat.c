#include "main.h"
/**
 * _strncat - concatenates one string (number of byte given)
 * to another
 * @dest: where to concatenate
 * @src: string to concatenate
 * @n: how many bytes to
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k, j;

	for (k = 0; dest[k] != '\0'; k++)
	{
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	return (dest);
}
