#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints struct
 * @d: struct type
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newDog = malloc(sizeof(dog_t));
    if (newDog == NULL)
    {
        return NULL;
    }
    
    newDog->name = malloc(strlen(name) + 1);
    if (newDog->name == NULL)
    {
        free(newDog);
        return NULL;
    }
    strcpy(newDog->name, name);
    
    newDog->age = age;
    
    newDog->owner = malloc(strlen(owner) + 1);
    if (newDog->owner == NULL)
    {
        free(newDog->name);
        free(newDog);
        return NULL;
    }
    strcpy(newDog->owner, owner);

    return newDog;
}
