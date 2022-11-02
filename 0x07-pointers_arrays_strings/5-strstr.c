#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: the longer string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring or
 * NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (index = 0; needle[index]; index++)
		{
			if (haystack[index] != needle[index])
				break;
		}
		if (index != s)
			haystack++;

		else
			return (haystack);
	}
	return (NULL);
}
