#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: the argument count
 * @argv: the array of argument strings
 *
 * Return: 0 Always (Success exit)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc);

	return (0);
}
