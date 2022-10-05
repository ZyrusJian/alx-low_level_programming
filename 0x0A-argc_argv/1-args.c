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
	printf("%d", argc);

	return (0);
}
