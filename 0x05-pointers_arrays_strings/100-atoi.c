/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int num = 0, neg = 0, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (num > INT_MAX / 10)
				return (neg % 2 == 0 ? INT_MAX : INT_MIN);
			num *= 10;
			if (num > INT_MAX - (s[i] - '0'))
				return (neg % 2 == 0 ? INT_MAX : INT_MIN);
			num += s[i] - '0';
		}
		i++;
	}

	return (neg % 2 == 0 ? num : -num);
}
