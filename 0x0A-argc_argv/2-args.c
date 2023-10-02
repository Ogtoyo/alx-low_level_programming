#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: argument count(size)
 * @argv: argument vector
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}
