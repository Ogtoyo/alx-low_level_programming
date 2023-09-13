#include <stdio.h>

/**
 * main -  printing the first 90 Fibonacci numbers
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	unsigned long int num1, num2, next;
	int count;

	num1 = 1;
	num2 = 2;

	printf("%ld, %ld, ", num1, num2);

	for (count = 3; count <= 98; count++)
	{
		next = num1 + num2;

		printf("%ld", next);

		if (count < 98)
			printf(", ");

		num1 = num2;
		num2 = next;

	}

	printf("\n");

	return (0);

}
