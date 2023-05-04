#include "main.h"

/**
 * clear_bit - Function to set the value of the bit representing
 * a number at a given index to 0
 * @n: Number to search from and to change
 * @index:  Index of the bit we want to set to 0 starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/**
	 * Do a bitwise AND between the number pointed to by n and a mask
	 * that has a 0 at the index position and 1 elsewhere.
	 * The mask is obtained by shifting the value 1 to the left
	 * by the index number of positions.
	 */

	*n &= ~(1UL << index);
	return (1);
}
