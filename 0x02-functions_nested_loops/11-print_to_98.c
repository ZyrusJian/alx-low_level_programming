#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - print integer from n-98..
 *@n: target integer
 *
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		i = n;

		while (i >= 98)
		{
			printf("%d", i);
			if (i > 98)
			{
				putchar(',');
				putchar(' ');
			}
			i--;
		}
		printf("\n");
	}
}
