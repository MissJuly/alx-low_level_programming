#include "main.h"
#include <stdio.h>

/**
 * main - Print all arguments received
 * @argc: the argument counter
 * @argv: the array arguments string
 *
 * Return: 0 Always (Successful exit)
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
