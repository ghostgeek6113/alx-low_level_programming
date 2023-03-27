#include "main.h"
/**

_atoi - converts a string to an integer
@s: input string
Return: integer value of string
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int res = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
{
res = (res * 10) + (s - '0');
if ((s + 1) < '0' || *(s + 1) > '9')
break;
}
s++;
}
return (sign * res);
}
