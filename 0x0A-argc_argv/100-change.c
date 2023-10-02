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
	int cents, total = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents > 0)
	{
		while (cents > 0)
		{
		if (cents >= 25)
		{
			cents -= 25;
			total++;
		} else if (cents >= 10)
		{
			cents -= 10;
			total++;
		} else if (cents >= 5)
		{
			cents -= 5;
			total++;
		} else if (cents >= 2)
		{
			cents -= 2;
			total++;
		} else
		{
			cents--;
			total++;
		}
	}
	printf("%d\n", total);
	return (0);
	}
	printf("0\n");
	return (0);
}
