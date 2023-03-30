#include "main.h"

/**
 * leet -  entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *str)
{
	int i, j;
	char leet_table[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
	char leet_digits[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_table[j][0] || str[i] == leet_table[j][1])
			{
				str[i] = leet_digits[j];
				break;
			}
		}
	}

	return (str);
}
