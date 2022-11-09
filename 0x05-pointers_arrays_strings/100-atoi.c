#include "main.h"

/**
 * _atoi - Find and print the first number in a string as in int
 * @s: string to convert to int
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	int k, l, j;

	k = l = j = 0;

	while (*(s + k) != '\0')
	{
		if (*(s + k) == '-')
			j++;
		if (*(s + k) >= '0' && *(s + k) <= '9')
		{
			while (*(s + k) >= '0' && *(s + k) <= '9')
			{
				if (l == 0)
				{
					l = (l * 10) + (*(s + k) - '0');
					l *= -1;
				}
				else
					l = (l * 10) - (*(s + k) - '0');
			k++;
			}
			if (j % 2 == 0)
				l *= -1;
			return (l);
		}
		k++;
	}
	return (0);
}
