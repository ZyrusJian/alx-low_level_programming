#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct
 * @d: struct type
 *
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
	{
		printf("Name: (nil)");
	}
	else if((*d).age == NULL)
	{
		printf("Age: (nil)");
	}
	else if((*d).owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else if ( (*d) != NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %lf\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
