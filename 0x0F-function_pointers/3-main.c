#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - check the code
 * @argc: arg counter
 * @argv: arg array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if ((get_op_func(operator)) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ans = get_op_func(operator)(num1, num2);
	printf("%d\n", ans);
	return (0);
}
