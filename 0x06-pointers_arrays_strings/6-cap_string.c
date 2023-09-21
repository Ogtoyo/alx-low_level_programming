#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *cap_string - a function that capitalizes all words of a string
 *@s: string
 *Return: modifing the string
 */

char *cap_string(char *s)
{
    int i;

    for (i = 1; s[i] != '\0'; i++)
    {
        for (; !(s[i] >= 'a' && s[i] <= 'z'); i++)
        {
            ;
        }
        if (s[i] == ' ' ||
        s[i - 1] == '\t' ||
        s[i - 1] == '\n' ||
        s[i - 1] == ',' ||
        s[i - 1] == ';' || 
        s[i - 1] == '.' || 
        s[i - 1] == '!'|| 
        s[i - 1] == '?' || 
        s[i - 1] == '"' || 
        s[i - 1] == '(' || 
        s[i - 1] == ')' || 
        s[i - 1] == '{' || 
        s[i - 1] == '}' ||
        i == 0)
        {
            s[i] -= 32;
        }

    }

    return (s);
}
