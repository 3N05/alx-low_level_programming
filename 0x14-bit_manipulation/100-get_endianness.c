#include "main.h"

/**
 * get_endianness -Function that checks the endianness
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	unsigned int h = 1;
	char *c = (char *)&h;

	if (*c)
		return (1);
	return (0);
}
