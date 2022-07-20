#include "lists.h"

/**
 * get_nodeint_at_index - Finds the nth node of a listint_t list.
 * @head: Pointer to listint_t.
 * @index: Index of the node, starting at 0.
 * Return: nth node of a listint_t or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	count = 0;
	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
