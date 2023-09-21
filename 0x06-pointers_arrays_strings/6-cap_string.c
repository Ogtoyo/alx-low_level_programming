#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *cap_string - a function that capitalizes all words of a string
 *@s: string
 *Return: modifing the string
 */

char *cap_string(char *s) {
    int i;

    if (strlen(s) > 0 && islower(s[0])) {
        s[0] = toupper(s[0]);
    }

    for (i = 1; s[i] != '\0'; i++) {
        if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
            s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
            s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
            s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
            s[i - 1] == '}')
        {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            }
        }
    }

    return s;
}