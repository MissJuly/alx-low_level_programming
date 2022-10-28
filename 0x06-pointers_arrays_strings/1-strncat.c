#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: Source value
 * @dest: Destination value
 * @n: The limit of the concatenation
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, l = 0;

	while (dest[len])
	{
		len++;
	}

	while (l < n && src[l])
	{
		dest[len] = src[l];
		len++;
		l++;
	}

	dest[len + n + 1] = '\0';

	return (dest);
}
