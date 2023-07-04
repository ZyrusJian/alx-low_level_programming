#include "lists.h"

/**
 * listint_len - prints the number of elements in the list
 * @h: pointer to the list
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *set;
	size_t k;

	set = NULL;
	set = h;
	k = 0;


	while (set != NULL)
	{
		k++;
		set = set->next;
	}
	return (k);
}
