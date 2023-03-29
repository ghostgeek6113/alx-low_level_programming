#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
       	
	while (*ptr)
		ptr++;
	
	while (*src)
		*ptr++ = *src++;
	
	*ptr = '\0';

	return dest;
}
