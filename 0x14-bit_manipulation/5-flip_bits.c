#include "main.h"

/**
 * flip_bits - Function to count the number of bits to change
 * in order to reach another number
 * @n: First number or Starting point
 * @m: Second number or target
 * Return: Number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int changes_count = 0;
	unsigned long int xor_operation = n ^ m;

	/**
	 * We first calculate the XOR of n and m to find
	 * a number where each bit is set to 1 if the bits at that position
	 * in n and m are different
	 * Then we count the number of 1 bits in the XOR result by
	 * using a loop that shifts the bits of the XOR result one by one
	 * and counts the least significant bit if it is 1.
	 */

	while (xor_operation != 0)
	{
		changes_count += xor_operation & 1;
		xor_operation >>= 1;
	}
	return (changes_count);
}
