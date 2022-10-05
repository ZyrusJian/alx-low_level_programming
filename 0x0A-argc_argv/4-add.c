#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive number args then print to stdout
 * @argv: arg_vector
 * @argc: arg_counter
 *
 * Return: On success 0. failuer 1.
 *
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
