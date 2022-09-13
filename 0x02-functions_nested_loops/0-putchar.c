#include<stdio.h>
/**
 * main - prints _putchar using custom function
 * @c: characters to write
 *
 * Return: 0 for succes.
 */

int _putchar(char c);

int main(void)
{
	char c[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(c[i]);

	return (0);
}
