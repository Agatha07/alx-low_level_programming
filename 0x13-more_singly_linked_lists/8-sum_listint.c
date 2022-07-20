#include "lists.h"

/**
 * sum_listint - Finds the sum of all the data (n) of a listint_t linked list.
 * @head: A pointer listint_t list
 *
 * Return: The sum of all the data (n) of the list or 0 if the list is empty.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
