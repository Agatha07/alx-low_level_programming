#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the list_t list.
 * @str: The string to be added to the node.
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	int len;
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (*str)
	{
		len++;
		str++;
	}

	new->len = len;
	new->str = dup_str;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
