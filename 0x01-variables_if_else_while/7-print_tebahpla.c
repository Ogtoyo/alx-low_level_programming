#include <stdio.h>

/**
 * main - printing the alphabet in lowercase in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}

	putchar(10);
	return (0);
}
