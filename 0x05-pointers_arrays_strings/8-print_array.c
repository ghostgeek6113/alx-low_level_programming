#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 *               followed by a new line.
 * @a: An array of integers.
 * @n: The number of elements of the array to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
    int index;

    for (index = 0; index < n; index++)
    {
        printf("%d", a[index]);

        if (index != n - 1)
            printf(", ");
    }

    printf("\n");
}
