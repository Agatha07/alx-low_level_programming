#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: Pointer to listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if ((*head)->next != NULL)
		temp = (*head)->next;
	else
	{
		free(*head);
		*head = NULL;
		return;
	}
	if (*head)
	{
		free_listint2(&temp);
		free(*head);
	}
	*head = NULL;
}

