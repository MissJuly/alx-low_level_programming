#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: the string to duplicate
 *
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	int k = 0, l = 1;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[l])
	{
		l++;
	}

	c = malloc((sizeof(char) * l) + 1);

	if (c == NULL)
		return (NULL);

	while (k < l)
	{
		c[k] = str[k];
		k++;
	}

	c[k] = '\0';
	return (c);
}
