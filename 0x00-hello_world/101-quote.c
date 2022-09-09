/*
 * this program prints to the standard error
 * a string exactly followed by a newline.
*/
#include<stdio.h>
/**
 * main - displays a string to the stderr
 * Return: 1 for succes.
 */
int main(void)
{
char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int er = sizeof(err);

fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19",
	er, 1, stderr);

return (1);
}
