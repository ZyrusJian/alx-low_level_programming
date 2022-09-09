/*
 * this program prints to the standard error
 * a string exactly followed by a newline.
*/
#include<stdio.h>
#include<string.h>
/**
 * main - displays a string to the stderr
 * Return: 1 for succes.
 */
int main(void)
{
char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int er = strlen(err);

fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19", 1,
	er, stderr);

return (1);
}
