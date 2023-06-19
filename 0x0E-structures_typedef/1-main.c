#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy_mukuku", 3.5231, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	print_dog(&my_dog);
	return (0);
}
