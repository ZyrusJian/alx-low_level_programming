/*
 * this code uses IF ELSE condition to compare
 * the last digit.
*/
#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - create a random number in every run and compares its last digit
 * Return: 0 for success.
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
		printf("Last digit of %d is %i and is greater than 5\n", n, ld);
	else if (ld < 6 && ld != 0)
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %i and is 0\n", n, ld);

	return (0);
}
