#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0, l = 0, n = 0, c = 0, limit;

	while (s1[k])
	{
		k++;
	}
	while (s2[l])
	{
		l++;
	}

	if (k <= l)
	{
		limit = k;
	}
	else
	{
		limit = l;
	}

	while (n <= limit)
	{
		if (s1[n] == s2[n])
		{
			n++;
			continue;
		}
		else
		{
			c = s1[n] - s2[n];
			break;
		}

		n++;
	}

	return (c);
}
