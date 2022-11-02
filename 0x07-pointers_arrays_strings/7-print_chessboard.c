#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: the row of the array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			if (k == 7)
			{
				_putchar(a[j][k]);
				_putchar('\n');
			}
			else
				_putchar(a[j][k]);
		}
	}
}
