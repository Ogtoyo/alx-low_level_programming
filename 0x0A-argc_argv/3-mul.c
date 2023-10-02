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

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
		return (0);
	}

	printf("Error\n");
	return (1);

}
