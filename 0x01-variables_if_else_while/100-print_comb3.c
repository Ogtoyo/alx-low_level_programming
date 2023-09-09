#include <stdio.h>

/**
 * main - printing the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 < 10; num_1++)
	{
		putchar(num_1 + '0');

		for (num_2 = 0; num_2 < 10; num_2++)
		{
			putchar(num_2 + '0');
		}
	}
	putchar(10);

	return (0);
}
