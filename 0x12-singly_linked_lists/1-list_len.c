#include "lists.h"

/**
 * list_len - Find the number of elements in a linkes list list_t
 * @h: pointer to linked list list_t
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
