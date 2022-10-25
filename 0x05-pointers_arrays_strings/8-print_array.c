#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements in the array a
 * @a: array to print
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j = 0;

	while (j < n)
	{
		printf("%d", a[j]);
		if (j < (n - 1))
			printf(", ");
		j++;
	}
	printf("\n");
}
