#include <stdio.h>

/**
 * main -  printing the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int num1, num2, next, count;

	num1 = 1;
	num2 = 2;

	printf("%d, %d, ", num1, num2);

	for (count = 3; count <= 50; count++)
	{
		next = num1 + num2;

		printf("%d", next);

		if (count < 50)
			printf(", ");

		num1 = num2;
		num2 = next;

	}

	printf("\n");

	return (0);

}
