#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints struct
 * @d: struct type
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: ");
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}

	printf("Age: %.2f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
