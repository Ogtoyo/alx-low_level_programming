#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: a pointer to a string representing the name
 * @f: function pointer that takes a pointer to a string as an argument
 *
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
