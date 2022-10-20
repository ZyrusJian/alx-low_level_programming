#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_const(const char * const test)
{
	int i;

	i = 0;
	while (*test != '\0')
	{
		
		printf("%c\n", test[i]);
		(*test)++;
		i++;
	}
	printf("%s\n", test);
}

/**
 * main - test of idea
 *
 * Return: 0
 */
int main(void)
{
	read_const("cream");
	return (0);
}
