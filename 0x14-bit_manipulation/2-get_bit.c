#include "main.h"

/**
 * get_bit - Function to get the bit value of a number at a index in a given
 * number
 * @n: Number whose internal numbers are looking for
 * @index: index of number whise bit is wanted starting from 0
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* Concatenate the return value using the bit shift operator */
	return ((n >> index) & 1);
}
