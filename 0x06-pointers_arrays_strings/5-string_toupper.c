/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: The string to modify.
 *
 * Return: The modified string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}

	return (s);
}
