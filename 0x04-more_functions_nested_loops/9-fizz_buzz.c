#include <stdio.h>

/**
 * main - Prints the numbers 1 to 100,
 * but for multiples of 3 Fizz is printed, for multiples of 5,
 * Buzz is printed, multiples of both 3 and 5 FizzBuzz is printed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 1; digit <= 100; digit++)
	{
		if ((digit % 3) == 0 && (digit % 5) == 0)
			printf("FizzBuzz");

		else if ((digit % 3) == 0)
			printf("Fizz");

		else if ((digit % 5) == 0)
			printf("Buzz");

		else
			printf("%d", digit);

		if (digit == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
