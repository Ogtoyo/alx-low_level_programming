#include "main.h"
#include <stdio.h>

/**
 * main - fizz and buzz
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz ");

		else if (num == 100)
			printf("Buzz");

		else if (num % 5 == 0 && num % 3 != 0)
			printf("Buzz ");

		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");

		else
			printf("%d ", num);

	}
	printf("\n");

	return (0);

}
