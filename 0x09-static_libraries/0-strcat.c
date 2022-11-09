#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @src: The source string
 * @dest: The destination string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, k;

	while (dest[len])
	{
		len++;
	}

	for (k = 0; src[k] != 0; k++)
	{
		dest[len] = src[k];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
