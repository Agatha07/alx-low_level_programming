#include "lists.h"

/**
 * get_dnodeint_at_index - Finds the nth node of a dlistint_t linked list.
 * @head: The head of the dlistint_t list.
 * @index: is the index of the node, starting from 0
 *
 * Return: Address of the node or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
