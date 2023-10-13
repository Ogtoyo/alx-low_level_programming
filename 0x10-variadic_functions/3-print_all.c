#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *seperator = "";

	va_start(args, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
					else
						printf("%s", str);
					break;
				default:
					i++;
					continue;
		}
		seperator = ", ";
		printf("%s", seperator);
		i++;
		}
	}
	va_end(args);
	printf("\n");
}