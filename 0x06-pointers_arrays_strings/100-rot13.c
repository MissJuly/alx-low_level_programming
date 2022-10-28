#include "main.h"
#include <stdio.h>

/**
 * rot13 - ...
 * @s: ...
 *
 * Return: ...
 */
char *rot13(char *s)
{
	int k = 0;

	while (s[k])
	{
		while ((s[k] >= 'a' && s[k] <= 'z') || (s[k] >= 'A' && s[k] <= 'Z'))
		{
			if ((s[k] > 'm' && s[k] <= 'z') || (s[k] > 'M' && s[k] <= 'Z'))
			{
				s[k] -= 13;
				break;
			}

			s[k] += 13;
			break;
		}

		k++;
	}

	return (s);
}
