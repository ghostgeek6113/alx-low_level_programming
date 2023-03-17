#include <stdio.h>

/**
* main - Prints the alphabet in lowercase in reverse order
*
* Return: Always 0 (Success)
*/
int main(void)
{
    char n;

    for (n = 'z'; n >= 'a'; n--)
    {
        putchar(n);
    }
    putchar('\n');

    return 0;
}
