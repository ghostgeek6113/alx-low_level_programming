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
unsigned long long a = 1, b = 2, c;
int i;
printf("%llu, %llu, ", a, b);
for (i = 2; i < 98; i++)
{
c = a + b;
printf("%llu", c);

if (i != 97)
{
printf(", ");
}
a = b;
b = c;
}
printf("\n");

return (0);
}
