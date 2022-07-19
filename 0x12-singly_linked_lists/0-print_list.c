#include "list.h"
#include <stdio.h>
/**
 * print_list - Prints all the elements of a list_t list
 * @h: pointer to list_t
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			nodes++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			nodes++;
			h = h->next;
		}
	}
	return (nodes);
}
