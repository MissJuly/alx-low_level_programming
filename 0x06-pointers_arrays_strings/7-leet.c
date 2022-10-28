#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @s: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *s)
{
	int k = 0, l = 0, n = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char j[5] = {'4', '3', '0', '7', '1'};

	while (s[k])
	{
		l = 0;

		while (l < n)
		{
			if (s[k] == r[l] || s[k] - 32 == r[l])
			{
				s[k] = j[l];
			}

			l++;
		}

		k++;
	}

	return (s);
}
