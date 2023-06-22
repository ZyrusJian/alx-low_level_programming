#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_const(const char * const test)
{
	int i, len;
	char *ptr;

	i = 0;
	len = strlen(test);
	ptr = (char *) malloc(len * sizeof(char));
	while (i < len)
	{
		ptr[i] = test[i];
		printf("%c\n", ptr[i]);
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
