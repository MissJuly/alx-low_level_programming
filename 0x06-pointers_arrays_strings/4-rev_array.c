#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array
 * @a: Array of integers
 * @n: Numbers of elements being swaped
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *p, k, temp, l;

	p = a;

	for (k = 1; k < n; k++)
	{
		k++;
	}

	for (l = 0; l / 2; l++)
	{
		temp = a[l];
		a[l] = *p;
		*p = temp;
		p--;
	}
}
