#include "lists.h"

/**
 * print_list - Print all elements of a list_t list
 * @h: Pointer to the first element of the list
 *
 * Return: Number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

			count += 1;
			h = h->next;
	}

	return (count);
}
