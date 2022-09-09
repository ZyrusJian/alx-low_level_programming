/*
 * this code uses IF ELSE condition to determine
 * a numbers signage.
*/
#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - create a random number in every run and determine its sign
 * Return: 0 for success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);

	return (0);
}
