#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Print results of user's operations
 * @argc: Number of arguments given
 * @argv: Array of pointers to the arguments
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num_1, num_2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	op = argv[2];
	num_2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num_2 == 0) || (*op == '%' && num_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num_1, num_2));

	return (0);
}
