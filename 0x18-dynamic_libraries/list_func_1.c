#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	/* Implementation */
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	/* Implementation */
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	/* Implementation */
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
 */

int _abs(int n)
{
	/* Implementation */
	return (n < 0 ? -n : n);
}

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	/* Implementation */
	return (c >= 'A' && c <= 'Z');
}
