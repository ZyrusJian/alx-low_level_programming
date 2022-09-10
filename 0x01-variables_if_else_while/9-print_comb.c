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
	int n, k;

	for (n = 0; n < 10; n++)
	{
		for (k = 0 ; k < 10 ; k++)
		{
			if (n <= k)
			{
				k++;
			}
			else
			{
				putchar(n + '0');
				putchar(k + '0');
				putchar(',');
			}
		}
	}

	putchar('\n');

	return (0);
}
