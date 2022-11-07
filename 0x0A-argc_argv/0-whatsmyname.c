#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the executable file
 * @argc: the argument count
 * @argv: the array of argument strings
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
