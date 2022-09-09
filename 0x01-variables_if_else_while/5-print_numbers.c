/*
 * this code uses FOR loop condition to print
 * numbers 0-9 using printf().
*/
#include <stdlib.h>
#include<stdio.h>

/**
 * main - printout numbers 0-9 using putchar().
 * Return: 0 for success.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	printf("\n");

	return (0);
}
