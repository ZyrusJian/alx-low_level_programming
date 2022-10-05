#include <stdio.h>
#include "main.h"

/**
 * main - prints its program name to stdout
 * @argv: arg_vector
 * @argc: arg_counter
 *
 * Return: On success 0.
 *
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
