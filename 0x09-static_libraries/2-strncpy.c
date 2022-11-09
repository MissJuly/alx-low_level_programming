#include "main.h"

/**
 * _strncpy - Copy a string
 * @src: Source value
 * @dest: Destination value
 * @n: Copy limit
 *
 * Return: dest value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0, l = 0;

	while (src[l])
	{
		l++;
	}

	while (k < n && src[k])
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
