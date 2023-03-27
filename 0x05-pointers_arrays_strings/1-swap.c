#include "main.h"

/**
 * swap_int - swaps the values of two int *a and int *b
 * @a: a pointer to an integer
 * @b: a pointer to an integer
 *
 * This function swaps the values of the integers pointed to by @a and @b.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
