#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(operator);

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(num1, num2);

	printf("%d\n", result);
	return (0);
}
