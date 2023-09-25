#include "main.h"
#include <stdio.h>

/**
 *_memcpy - a function that copies memory area.
 *
 * @src: source buffer
 * @dest: destinaton buffer
 * @n: the number of byte we want in the memory
 * Return: pointer to the memory
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i <= n - 1; i++)
    {
        dest[i] = src[i];
    }

    return (dest);

}

