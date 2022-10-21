#include "lists.h"

/**
 * list_len - prints the number of elements in the list
 * @h: pointer to the list
 *
 * Return: size of list
 */

size_t list_len(const list_t *h)
{
	const list_t *set;
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
