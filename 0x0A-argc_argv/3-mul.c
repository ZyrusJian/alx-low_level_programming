#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two args then print to stdout
 * @argv: arg_vector
 * @argc: arg_counter
 *
 * Return: On success 0. failuer 1.
 *
 */

int main(int argc, char *argv[])
{
	int mul;

	mul = 0;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
