/*
 * this code uses FOR loop condition to print
 * numbers 0-9 using putchar().
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
		putchar(n + '0');

	putchar('\n');

	return (0);
}
