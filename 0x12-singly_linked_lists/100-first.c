#include <stdlib.h>
#include <stdio.h>

__attribute__ ((constructor))void _first(void);

/**
 * _first - prints before main
 *
 *
 */

__attribute__ ((constructor))void _first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
