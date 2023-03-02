#include "main.h"
/**
 * reverse_array - reverss an array of integers
 * @a: array;
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int x;
	int temp;

	x = 0;
	n = n - 1;
	while (x <= n)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		x++;
		n--;
	}
}
