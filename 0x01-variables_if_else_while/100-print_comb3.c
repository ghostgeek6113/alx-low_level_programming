#include <stdio.h>

/**
 * main - prints all possible combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j;

    for (i = 0; i < 99; i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            if (i != j)
            {
                putchar((i / 10) + '0');
                putchar((i % 10) + '0');
                putchar(',');
                putchar(' ');
                putchar((j / 10) + '0');
                putchar((j % 10) + '0');

                if (i < 98 || j < 99)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

putchar('\n');

return (0);
}
