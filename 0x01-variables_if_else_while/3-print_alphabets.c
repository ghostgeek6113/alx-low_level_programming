#include <stdio.h>
/**
*main - Entry point
*Description: Prints the alphabet in lowercase and uppercase, followed by a new line, using the putchar function twice
*Return: Always 0 (Success)
*/
int main()
{
char l;
char u;
for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
for (u = 'A'; u <= 'Z'; u++)
{
putchar(u);
}
putchar('\n');
return (0);
}
