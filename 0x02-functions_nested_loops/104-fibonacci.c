#include <stdio.h>
/**
* main - Finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2,
* separated by a comma and a space, followed by a newline character.
*
* Return: 0 indicating successful execution of the program.
*/
int main(void)
{
unsigned long a = 1, b = 2, c;
printf("%lu, %lu, ", a, b);
for (int i = 0; i < 48; i++)
{
c = a + b;
printf("%lu", c);
if (i != 47)
{
printf(", ");
}
a = b;
b = c;
}
printf("\n");
return (0);
}
