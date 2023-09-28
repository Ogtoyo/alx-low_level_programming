#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        putchar(10);
        return;
    }
        
    
    putchar(*s);
    s++;
    _puts_recursion(s);
}