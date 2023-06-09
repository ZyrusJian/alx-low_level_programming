#include <stdio.h>
#include "main.h"

/**
 * main - prints number or args to stdout
 * @argv: arg_vector
 * @argc: arg_counter
 *
 * Return: On success 0.
 *
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	if (argc == 1)
		printf("%d\n", 0);
	else if (argc > 1)
		printf("%d\n", argc - 1);

	return (0);
}
