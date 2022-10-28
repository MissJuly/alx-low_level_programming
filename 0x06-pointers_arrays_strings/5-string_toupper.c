#include "main.h"

/**
 * string_toupper - changes all lowercase letter
 * @p: The string to be modified
 *
 * Return: char var
 */
char *string_toupper(char *p)
{
	int j = 0;

	while (p[j])
	{
		if (p[j] >= 97 && p[j] <= 122)
		{
			p[j] -= 32;
		}

		j++;
	}

	return (p);
}
