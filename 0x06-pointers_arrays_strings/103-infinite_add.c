#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: the first number to add
 * @n2: the second number to add
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1, len2, sum, carry;

	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	carry = 0;
	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
	{
		sum = carry;
		if(i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = sum % 10 + '0';
	}


	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}

	r[k] = '\0';

	return (r);
}
