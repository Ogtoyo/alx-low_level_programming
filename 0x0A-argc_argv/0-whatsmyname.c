#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * @argc: argument count(size)
 * @argv: argument vector
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
