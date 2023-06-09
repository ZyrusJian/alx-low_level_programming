#include "main.h"

int _isprime(int n, int a);

/**
 * is_prime_number - compute if number is prime
 * @n: target number
 *
 * Return: result of computation
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (_isprime(n, 2));
}

/**
 * _isprime - compute if a nuumber is prime
 * @n: target number
 * @a: divisors
 *
 * Return: result of computation
 */

int _isprime(int n, int a)
{
	if (n % a == 0)
	{
		if ((n == 2) || (n == a))
			return (1);
		else
			return (0);
	}

	return (_isprime(n, (a + 1)));
}
