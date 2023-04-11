#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string to be duplicated.
 * Return: pointer to the duplicated string,
 * or NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);

	return (strcpy(new_str, str));
}
