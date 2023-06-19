#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize struct
 * @d: struct type
 * @name: name entry
 * @age: age entry
 * @owner: owner entry
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = malloc(strlen(name) + 1);
	if ((*d).name == NULL)
	{
		exit(0);
	}
	(*d).owner = malloc(strlen(owner) + 1);
	if ((*d).owner == NULL)
	{
		exit(0);
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
