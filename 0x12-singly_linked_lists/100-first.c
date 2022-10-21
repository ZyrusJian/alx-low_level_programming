#include <stdlib.h>
#include <stdio.h>

void _first(void) __attribute__ ((constructor));

/**
 * _first - prints before main
 * 
 *
 */

void _first(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
