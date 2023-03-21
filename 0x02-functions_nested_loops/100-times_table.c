#include "main.h"

/**
* print_times_table - prints the n times table,
* starting with 0
* @n: the number of times to print (maximum 15)
*/
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}
int i, j;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
{
_putchar('0');
}
else
{
int result = i * j;
_putchar(',');
_putchar(' ');
if (result < 10)
{
_putchar(' ');
}
if (result < 100)
{
_putchar(' ');
}
_putchar(result / 100 % 10 + '0');
_putchar(result / 10 % 10 + '0');
_putchar(result % 10 + '0');
}
}
_putchar('\n');
}
}
