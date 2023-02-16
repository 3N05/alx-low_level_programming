#include <stdio.h>
/**
 * A C program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of char: %lu bytes\n", (unsigned long)sizeof(c));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(i));
printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(li));
printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(lli));
printf("Size of float: %lu bytes\n", (unsigned long)sizeof(f));

return (0);

}
