#include <stdio.h>

/**
 * main -  printing the Fibonacci sequence
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	unsigned long int num1, num2, Nextnum, sum;

	num1 = 0, num2 = 1, sum = 0;

	for (Nextnum = 0; Nextnum < 4000000; Nextnum++)
	{

		if (Nextnum % 2 == 0)
		{
			Nextnum = num1 + num2;

		}

		num1 = num2;
		num2 = Nextnum;

		sum += Nextnum;
	}

	printf("%ld\n", sum);

	return (0);
}
