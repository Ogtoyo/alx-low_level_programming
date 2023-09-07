#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char code[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(code, 1, sizeof(code) - 1, stdout);

	return (1);
}
