#include <stdlib.h>
#include <string.h>

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
