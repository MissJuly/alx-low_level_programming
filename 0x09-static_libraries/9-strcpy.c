#include "main.h"

/**
 * _strcpy - copies string pointed to by src,
 * to buffer pointed to by dest.
 * @src: source to copy
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	while (*(src + k))
	{
		*(dest + k) = *(src + k);
		k++;
	}
	*(dest + k) = '\0';
	return (dest);
}
