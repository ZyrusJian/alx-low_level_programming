#include<stdio.h>
#include "main.h"
/**
 * main - prints _putchar using custom function
 *
 * Return: 0 for succes.
 */

int main(void)
{
	char c[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(c[i]);

	return (0);
}
