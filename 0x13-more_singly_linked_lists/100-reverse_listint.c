#include "lists.h"

/**
 * rvr_list - reverses list
 * @head: pointer to the existing list
 *
 *
 * Return: reversed list head
 */

listint_t *rvr_list(listint_t *head)
{
	listint_t *rvr, *set;
	set = head;
	rvr = NULL;
	if (set != NULL)
	{
		rvr = rvr_list(set->next);
	}
	return (rvr);
}

/**
 * reverse_listint - reverses list
 * @head: pointer to the existing list
 *
 *
 * Return: reversed list head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rvr;
	rvr = (*head);
	return (rvr_list(rvr));
}
