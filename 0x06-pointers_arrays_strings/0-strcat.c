#include "main.h"
/**
 * _strcat - appends strings
 * @dest: destination to append
 * @src: what to append
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int k, j;

	for (k = 0; dest[k] != '\0'; k++)
	{
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[k] = src[j];
		j++;
		k++;
	}
	k++;
	dest[k] = '\0';
	return (dest);
}
