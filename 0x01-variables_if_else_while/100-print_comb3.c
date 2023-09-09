#include <stdio.h>

/**
 * main - printing all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_1, num_2;

	for (num_1 = 0, num_2 = 0; num_1 < 9; num_1++, num_2++)
	{
		putchar(num_1 + '0');
		putchar(num_2 + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(10);

	return (0);
}
