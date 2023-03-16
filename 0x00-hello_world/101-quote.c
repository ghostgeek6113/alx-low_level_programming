#include <unistd.h>
/**
* main - Entry point of the program
*
* Description: Prints a message to the standard error.
* Return: 1
*/
int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = 0;
while (msg[len])
{
len++;
}

write(2, msg, len);
return (1);
}
