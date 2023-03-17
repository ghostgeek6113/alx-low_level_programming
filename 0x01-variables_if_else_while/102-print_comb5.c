#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99, and should be printed with two
 * digits.
 * The combination of numbers must be separated by comma, followed by a space.
 * The combinations of numbers should be printed in ascending order.00 01
 * and 01 00 are considered as the same combination of the numbers 0 and 1.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num1, num2;

for (num1 = 0; num1 < 100; num1++)
{
for (num2 = num1 + 1; num2 < 100; num2++)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');

if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
