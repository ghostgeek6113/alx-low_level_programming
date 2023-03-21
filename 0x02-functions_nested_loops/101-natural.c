/**
* sum_of_terms - Calculates the sum of all numbers that are divisible by 3 or 5
* up to 1023.
*
* Return: The sum of all numbers that are divisible by 3 or 5 up to 1023.
*/
int sum_of_terms(void)
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

return sums;
}
