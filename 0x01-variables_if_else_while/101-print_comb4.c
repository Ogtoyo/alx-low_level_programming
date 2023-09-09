#include <stdio.h>

/**
 * main - printing all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_1, num_2, num_3;

	for (num_1 = 0; num_1 < 8; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 < 9; num_2++)
		{
			for (num_3 = num_2 + 1; num_3 < 10; num_3++)
			{

				putchar(num_1 + '0');
				putchar(num_2 + '0');
				putchar(num_3 + '0');

				if (num_1 != 7 || num_2 != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar(10);

	return (0);
}
