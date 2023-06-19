#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - struct defining dog
 * @name: name entry
 * @age: age entry
 * @owner: owner entry
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H_ */
