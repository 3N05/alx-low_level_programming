#include <stdio.h>

/**
 * main - Program that displays the information in the elf
 * @argc: Number of arguments
 * @argv: Pointer to array of arguments
 * Return: 1 on success, error code on failed
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
