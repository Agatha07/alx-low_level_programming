#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: double pointer to the beginning of the linked list
 * @n: integer to add to the new node
 *
 * Return: the address/pointer of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
