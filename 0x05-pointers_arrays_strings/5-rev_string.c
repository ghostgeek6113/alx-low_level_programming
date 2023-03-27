#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	if (s == NULL || *s == '\0')
		return;

	i = 0;
	j = 0;

	while (s[j] != '\0')
		j++;

	j--;

	while (i < j)
	{

		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
