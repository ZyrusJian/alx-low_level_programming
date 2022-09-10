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
	int k;
	int j;

	for (n = 0; n < 8; n++)
	{
		for (k = 1; k < 9; k++)
		{
			for (j = 2; j < 10; j++)
			{
				if (k > n && j > k)
				{
					putchar(n + '0');
					putchar(k + '0');
					putchar(j + '0');
					if (n != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
