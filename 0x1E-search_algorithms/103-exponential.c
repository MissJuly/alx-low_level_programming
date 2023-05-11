#include "search_algos.h"

/**
 * _binary_search - Searches for a value in a sorted array
 * of intergers using binary search.
 * @array: a pointer to the first element of the array to search
 * @left: the number of elements at the left side in array
 * @right: the number of elements at the right side in array
 * @value: the value to search for
 * Return: if the value is not present or the array is Null, -1,
 * otherwise, the index where the value is located
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Seraching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the exponential search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the number of elements in array
 * Return: If value is not present in array or if array is NULL, -1.
 * else, index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
