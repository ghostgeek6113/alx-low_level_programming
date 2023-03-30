#include <stdio.h>

/**
 * print_buffer - prints the content of a buffer
 *
 * @b: pointer to the buffer to print
 * @size: size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;
	unsigned char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				c = *(b + i + j);
				printf("%02x", c);
			}
			else
			{
				printf("  ");
			}

			if (j % 2 == 1)
			{
				printf(" ");
			}
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
			{
				break;
			}

			c = *(b + i + j);

			if (c >= 32 && c <= 126)
			{
				printf("%c", c);
			}
			else
			{
				printf(".");
			}
		}

		printf("\n");
	}
}
