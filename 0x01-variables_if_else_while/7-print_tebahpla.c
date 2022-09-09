/*
 * this code uses WHILE loop condition to print
 * lower case z-a using putchar().
*/
#include <stdlib.h>
#include<stdio.h>

/**
 * main - printout the alphabet in lower case using putchar().
 * Return: 0 for success.
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
