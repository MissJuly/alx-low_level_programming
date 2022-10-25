#include "main.h"

/**
 * _strlen - Returns the length of string
 * @s: The string
 *
 * Return: n
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return (n);
}
