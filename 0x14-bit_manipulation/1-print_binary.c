#include "main.h"

/**
 * print_binary - Function to convert an integer to binary
 * @n: integer to convert to binary
 */

void print_binary(unsigned long int n)
{
	int i, bit_count = 0;
	unsigned long int current_integer;

	for (i = 63; i >= 0; i--)
	{
		current_integer = n >> i;

		if (current_integer & 1)
		{
			_putchar('1');
			bit_count++;
		}
		else if (bit_count)
			_putchar('0');
	}
	if (!bit_count)
		_putchar('0');
}
