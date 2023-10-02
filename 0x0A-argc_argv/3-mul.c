#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count(size)
 * @argv: argument vector
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		mul *= atoi(argv[i]);
		}

		printf("%d\n", mul);
		return (0);
	}

	printf("Error\n");
	return (1);

}
