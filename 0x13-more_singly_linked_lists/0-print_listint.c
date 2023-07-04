#include "lists.h"

/**
 * print_listint - prints all the elements of the list
 * @h: pointer to the list
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *set;
	size_t k;

	set = NULL;
	set = h;
	k = 0;


	while (set != NULL)
	{
		k++;
		printf("%d\n", set->n);
		set = set->next;
	}
	return (k);
}
