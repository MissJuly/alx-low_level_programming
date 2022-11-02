#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals os a square
 * matrix of integers
 * @a: the name of the array
 * @size: the size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int j = 0;
	int k = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (j <= (size * size))
	{
		sum1 = sum1 + a[j];
		j = j + size + 1;
	}

	while (k < (size * size - 1))
	{
		sum2 += a[k];
		j = j + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
