#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_buffer - a function that prints a buffer
 *@b: pointer to buffer
 *@size: content byte
 *Return: void
*/

void print_buffer(char *b, int size)
{
    int postion, i, j, remaining, bytes_to_print;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (postion = 0; postion < size; postion += 10)
    {
        remaining = size - postion;
        bytes_to_print = remaining < 10 ? remaining : 10;

        printf("%08x: ", postion);

        for (i = 0; i < bytes_to_print; i++)
        {
            printf("%02x", b[postion + i]);
            if (i % 2)
            {
                printf(" ");
            }
        }

        for (j = 0; j < 10 - bytes_to_print; j++)
        {
            printf("   ");
            if (j % 2)
            {
                printf(" ");
            }
        }

        for (i = 0; i < bytes_to_print; i++)
        {
            int c = b[postion + i];
            if (c < 32 || c > 126)
            {
                c = '.';
            }
            printf("%c", c);
        }

        printf("\n");
    }
}