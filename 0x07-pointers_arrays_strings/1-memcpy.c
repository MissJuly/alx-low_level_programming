#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination of the memory being copied
 * @n: The number of bytes
 * @src: The memory area to copy from
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
