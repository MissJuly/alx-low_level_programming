#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Create array of integers filled with numbers from min to max
 * @min: First number in the array
 * @max: Largest number in the array
 *
 * Return: Pointer to new array, NULL if failed
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;
	int k = 0;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1 ));
	if (ar == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ar[k] = i;
		k++;
	}
	return (ar);
}
