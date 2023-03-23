#include <stdio.h>
#include <math.h>
/**
 * main - find and print largest prime factor of NUM
 *
 * Return: 0 always
 */
int main(void)
{
	long n = 612852475143;
	long max_factor = -1;
	long i;
	while (n % 2 == 0)
	{
		max_factor = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_factor = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		max_factor = n;
	}
	printf("%ld\n", max_factor);
	return (0);
}
