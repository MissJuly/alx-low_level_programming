#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints result of adding positive numbers
 * @argc: the argument count
 * @argv: the number of arguments string
 *
 * Return: 0 Always (Success),
 * 1 if nondigits are entered
 */
int main(int argc, char *argv[])
{
	int k;
	int index;
	int sum;

	index = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (index < argc)
	{
		for (k = 0; argv[index][k] != '\0'; k++)
		{
			if (!(isdigit(argv[index][k])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[index]);
		index++;
	}
	printf("%d\n", sum);
	return (0);
}
