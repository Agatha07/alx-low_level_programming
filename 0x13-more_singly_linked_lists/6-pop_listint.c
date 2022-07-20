#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: The head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || !*head)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
