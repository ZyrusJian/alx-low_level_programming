/*
 * this code uses WHILE loop condition to print
 * lower case a -z, then Upper case A-Z using putchar().
*/
#include <stdlib.h>
#include<stdio.h>

/**
 * main - printout alphabets in lower followed by Upper case using putchar().
 * Return: 0 for success.
 */
int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}

	while (ALP <= 'Z')
	{
		putchar(ALP);
		ALP++;
	}
	putchar('\n');
	return (0);
}
