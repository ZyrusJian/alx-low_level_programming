#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _cents(int n);

/**
 * main - minimum coin chang for args then print to stdout
 * @argv: arg_vector
 * @argc: arg_counter
 *
 * Return: On success 0. failuer 1.
 *
 */

int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	else if (argc == 2)
	{
		if (atoi(argv[1]) <= 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			printf("%d\n", _cents(atoi(argv[1])));
		}
	}
	return (0);
}

/**
 * _cents - minimum coin change
 * @n: target
 *
 * Return: ncent
 *
 */

int _cents(int n)
{
	int ncent, i;
	int coin[5] = {25, 10, 5, 2, 1};

	ncent = 0;

	if (n > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (n % coin[i] == 0)
			{
				ncent = n / coin[i];
				return (ncent);
			}
		}
	}
	return (0);
}
