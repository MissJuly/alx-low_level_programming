#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the argument count
 * @argv: the array of arguments string
 *
 * Return: 0 Always (Success),
 * 1 if not issued two arguments
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int product;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;

		printf("%d\n", product);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
