/*
 * this code uses FOR loop condition to print
 * numbers 0-f in hexadecimal using putchar().
*/
#include <stdlib.h>
#include<stdio.h>

/**
 * main - printout numbers 0-f in hexadecimal using putchar().
 * Return: 0 for success.
 */
int main(void)
{
	int n;
	char c;

	for (n = 0x0; n < 0xa; n++)
		putchar(n + '0');

	for (c = 'a' ; c < 'g' ; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
