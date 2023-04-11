#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words from
 *
 * Return: The number of words in the string
 */
static int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			++count;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	n = count_words(str);
	words = malloc((n + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; j < n; ++j)
	{
		while (str[i] == ' ')
		{
			++i;
		}
		k = i;
		while (str[i] != ' ' && str[i] != '\0')
		{
			++i;
		}
		words[j] = malloc((i - k + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (--j; j >= 0; --j)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		k = 0;
		while (k < i - j)
		{
			words[j][k] = str[j + k];
			++k;
		}
		words[j][k] = '\0';
	}
	words[n] = NULL;
	return (words);
}
