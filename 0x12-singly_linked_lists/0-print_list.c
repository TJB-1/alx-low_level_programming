#include "list.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: a pointer to the first element of list
 * Return - Number of nodes or elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0;

	if (!h)
	{
		return (elements);
	}
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		elements++;
		h = h->next;
	}
	return (elements);
}
