/*
 * this code uses WHILE loop condition to print
 * lower case a -z using putchar().
*/
#include <stdlib.h>
#include<stdio.h>

/**
 * main - printout the alphabet in lower case using putchar().
 * Return: 0 for success.
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'e' || alp == 'q')
		{
			alp++;
		}
		else
		{
			putchar(alp);
			alp++;
		}
	}
	putchar('\n');
	return (0);
}
