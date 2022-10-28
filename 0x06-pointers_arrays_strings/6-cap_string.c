#include "main.h"
#include <stdio.h>

/**
 * cap_string - ...
 * @s: ...
 *
 * Return: char value
 */
char *cap_string(char *s)
{
	int k = 0, l;
	int cps = 13;
	char sep[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[k])
	{
		l = 0;

		while (l < cps)
		{
			if ((k == 0 || s[k - 1] == sep[l]) && (s[k] >= 97 && s[k] <= 122))
				s[k] -= 32;
			l++;
		}

		k++;
	}

	return (s);
}
