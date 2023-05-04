#include "main.h"

/**
 * binary_to_uint - Function to convert a binary to unsigned integer
 * @b: Binary number as a string of 0 and 1 characters
 * Return: Equivalent value in int or 0 if illigal character in b or b=NULL
 */

unsigned int binary_to_uint(const char *b)
{
	size_t i;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decimal_value = (decimal_value << 1) | (b[i] - '0');
	}
	return (decimal_value);
}
