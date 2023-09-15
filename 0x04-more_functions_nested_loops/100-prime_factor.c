#include "main.h"
#include <stdio.h>

/**
 *main - a program that finds and prints the largest prime factor
 *Return: Always 0
 */

int main(void)
{
	long int num, pri, i;

	num = 612852475143;
	i = 2;

	while (i * i <= num)
	{

		if (num % i)
			i++;
		else
			num /= i;
	}

	pri = num;

	printf("%ld\n", pri);
	return (0);
}
