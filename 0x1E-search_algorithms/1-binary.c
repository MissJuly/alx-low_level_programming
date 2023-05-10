#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *                of integers using binary search.
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: if the value is not present or the array is Null,
 * -1, otherwise, the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;
	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == left)
				printf("%d ", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");

		mid = left + (right - left) / 2;
		if (array[mid] ==value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
