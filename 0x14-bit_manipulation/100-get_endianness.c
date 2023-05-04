#include "main.h"

/**
 * get_endianness - Function to check the endianness of a computer
 * and classify whether it is big or little endian
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int endian_number = 1;
	char *endianness = (char *)&endian_number;

	return (*endianness);
}
