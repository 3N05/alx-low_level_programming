#include "main.h"
#include <math.h>
/**
 * is_prime_number - blank
 * @n: number
 * Return: blank
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return 0;
	}

	int i;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;	
}
