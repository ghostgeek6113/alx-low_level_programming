#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints numbers from 0 to 9 separated by ',' and ends with '\n'
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('$');
}
}
return 0;
}
