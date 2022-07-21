#include "lists.h"

/**
 * listint_len - Finds the number of elements in a linked listint_t list.
 * @h: Pointer to listint_t list.
 *
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
