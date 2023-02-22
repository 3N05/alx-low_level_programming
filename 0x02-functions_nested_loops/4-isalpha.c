#include "main.h"
/**
 * _islower - Check description
 * @c: An input character
 * Description: function that checks uppercase
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

