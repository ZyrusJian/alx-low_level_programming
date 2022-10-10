#include <stdio.h>
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
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
