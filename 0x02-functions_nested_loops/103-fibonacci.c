#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci numbers,
 * that don't exceed 4000000
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int l = 1, j = 2, sum = j;

	while (j + l < 4000000)
	{
		j += l;

		if (j % 2 == 0)
			sum += j;

		l = j - l;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
