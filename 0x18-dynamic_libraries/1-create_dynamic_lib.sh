#!/bin/bash
for file in *.c; do
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c "$file"
done
gcc -shared -o liball.so *.o
