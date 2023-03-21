#include <stdio.h>

/**
* main - Calculates the sum of all numbers that are divisible by 3 or 5
* up to 1023.
*
* prints The sum of all numbers that are divisible by 3 or 5 up to 1023.
* Return: 0 if successful
*/
int main(void)
{
int sums = 0;
int count = 0;

while (count < 1024)
{
if (count % 3 || count % 5)
{
sums += count;
}

count++;
}
printf("%d",sums);
return (0);
}
