#include <stdio.h>

/**
* main - Entry point
* Calculates the sum of even Fibonacci numbers up to 4,000,000.
*
* Return: 0 indicating successful execution of the program
*/


int main()
{
int sum = 0;
int fib1 = 1, fib2 = 2;
int temp;
while (fib2 <= 4000000) {
if (fib2 % 2 == 0) {
sum += fib2;
}
temp = fib2;
fib2 += fib1;
fib1 = temp;
}
printf("%d\n", sum);
return (0);
}
