/*
 * this program uses the sizeof() function to print
 * the size occupied in memory by a specific type.
*/
#include<stdio.h>
/**
 * main - evaluates the size of type on the compiled device
 * Return: o for succes.
 */
int main(void)
{
int c = sizeof(char);
int i = sizeof(int);
int li = sizeof(long int);
int lli = sizeof(long long int);
int flt = sizeof(float);

printf("Size of a char: %d byte(s)\n", c);
printf("Size of an int: %d byte(s)\n", i);
printf("Size of a long int: %d byte(s)\n", li);
printf("Size of a long long int: %d byte(s)\n", lli);
printf("Size of a float: %d byte(s)\n", flt);

return (0);
}
