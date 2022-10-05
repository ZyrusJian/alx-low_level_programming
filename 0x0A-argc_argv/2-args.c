#include <stdio.h>
#include "main.h"

/**
 * main - prints all args to stdout
 * @argv: arg_vector
 * @argc: arg_counter
 *
 * Return: On success 0.
 *
 */

int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}
