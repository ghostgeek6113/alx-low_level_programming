#include <stdio.h>
#include <stdlib.h>

/**
 * turtle - prints before main because of the __attribute__((constructor))
 * syntax in the function declaration which tells the compiler to execute
 * the function before the main() function is executed.
 */

void __attribute__ ((constructor)) turtle()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
