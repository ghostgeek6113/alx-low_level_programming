#include <stdio.h>

/**
* main - prints the lowercase alphabet except the letters 'e' and 'q', followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
{
if (l == 'e' || l == 'q')
{
continue;
}
putchar(l);
}
putchar('\n');
return 0;
}
