#include <stdio.h>

/**
 * main - printing the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch, cH;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}

	for (cH = 65; cH <= 90; cH++)
	{
		putchar(cH);
	}

	putchar(10);
	return (0);
}
