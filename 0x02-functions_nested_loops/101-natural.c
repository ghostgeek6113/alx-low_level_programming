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
int i;
for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sums+= i;
}
}
printf("%d",sums);
printf("\n");
return (0);
}
