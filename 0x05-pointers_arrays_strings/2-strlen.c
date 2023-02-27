#include "main.h"
/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int estebantupapi;

	for (estebantupapi = 0; s[estebantupapi] != '\0'; estebantupapi++)
		;

	return (estebantupapi);
}
