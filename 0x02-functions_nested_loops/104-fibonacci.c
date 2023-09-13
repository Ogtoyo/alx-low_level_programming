#include <stdio.h>

/**
 * main -  printing the first 90 Fibonacci numbers
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	unsigned long int num1, num2, n, num1A, num2A, num1B, num2B, count;

	num1 = 1;
	num2 = 2;
	n = 1000000000;

	printf("%lu", num1);

	for (n = 1; n < 91; n++)
	{
		printf(", %lu", num2);

		num2 += num1;
		num1 = num2 - num1;
	}
		num1A = num1 / n;
		num1B = num1 % n;
		num2A = num2 / n;
		num2B = num2 % n;

	for (n = 92; n < 99; n++)
	{
		printf(", %lu", num2A + (num2B / n));
		printf("%09lu", num2B % n);

		num2A = num2A + num1A + (num2B / n);
		num1A = num2A - num1A;
		num2B = num2B + num1B;
		num1B = num2B - num1B;
	}


	printf("\n");

	return (0);

}
