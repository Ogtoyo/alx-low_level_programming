#include "lists.h"
#include <unistd.h>

/**
 * _putchar - to print
 *@c: the charcter
 *
 * Return: Always 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
