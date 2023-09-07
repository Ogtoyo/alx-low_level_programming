#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char code[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, code, sizeof(code) - 1);

	return (1);
}
