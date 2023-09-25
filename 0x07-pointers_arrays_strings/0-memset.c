#include "main.h"
#include <stdio.h>

/**
 * memset - a function that fills memory with a constant byte
 *
 * @s: pointer to the memory area
 * @b: constant byte to fill into the memory 
 * @n: the number of byte we want in the memory
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    if (n <= 0)
        return (s);

    else
    {
        for (i = 0; i <= (n - 1); i++)
        {
            s[i] = b;
        }

        return (s);
    }
}
