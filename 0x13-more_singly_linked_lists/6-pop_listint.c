#include "lists.h"

/**
 * pop_listint - frees the list
 * @head: pointer to the existing list
 *
 * Return: list element n
 */

int pop_listint(listint_t **head)
{
	listint_t *set;
	int dt;

	dt = 0;
	if ((*head) == NULL)
		return (0);

	else
	{
		dt = (*head)->n;
		set = (*head);
		(*head) = (*head)->next;
		free(set);
	}
	return (dt);
}
