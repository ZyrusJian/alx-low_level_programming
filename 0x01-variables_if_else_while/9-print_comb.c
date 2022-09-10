/*
 * this code uses FOR loop condition to print
 * possible combination of single digit
 * numbers in ascending order using putchar().
*/
#include <stdlib.h>
#include<stdio.h>

/**
 * main - printout combination of 0-9 using putchar().
 * Return: 0 for success.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
