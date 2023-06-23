#include <stdio.h>
#include <stdlib.h>

/**
 * printOpCodes - prints opcodes
 * @numBytes: the number of bytes to print
 *
 */

void printOpCodes(int numBytes)
{
	int i;
	unsigned char *mainFunc;

	mainFunc = (unsigned char *)printOpCodes;

	for (i = 0; i < numBytes; i++)
	{
		printf("%02x ", mainFunc[i]);
	}
	printf("\n");
}

/**
 * main - prints opcodes
 * @argc: the number of args
 * @argv: input argument
 *
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int numBytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numBytes = atoi(argv[1]);
	if (numBytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	printOpCodes(numBytes);
	return (0);
}
