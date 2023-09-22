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
    int position, i;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (position = 0; position < size; position += 10)
    {
        printf("%08x: ", position);

        for (i = 0; i < 10; i++)
        {
            if (position + i < size)
            {
                printf("%02x", (unsigned char)b[position + i]);
                if (i % 2)
                {
                    printf(" ");
                }
            }
            else
            {
                printf("   ");
            }
        }

         printf(" ");

        for (i = 0; i < 10; i++)
        {
            if (position + i < size)
            {
                if (b[position + i] >= 32 && b[position + i] <= 126)
                {
                    printf("%c", b[position + i]);
                }
                else
                {
                    printf(".");
                }
            }
        }   
        
        printf("\n");
    }

}
