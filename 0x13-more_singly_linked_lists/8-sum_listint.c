#include "lists.h"

/**
 * sum_listint - sums the list data n
 * @head: pointer to the existing list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *set;
	int dt, sum;

	dt = 0;
	sum = 0;
	if (head == NULL)
		return (0);

	set = head;
	while (set != NULL)
	{
		dt = set->n;
		sum += dt;
		set = set->next;

	}
	return (sum);
}
