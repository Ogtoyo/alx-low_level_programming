#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - a function that reverses a string
 *
 * @s: pointer to string
 *
 */

void rev_string(char *s)
{
	int i, x;
	char path;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}

	i = i - 1;

	for (x = 0; x < i; x++)
	{
		path = s[x];
		s[x] = s[i];
		s[i] = path;
		i--;
	}

}

/**
 *infinite_add -  a function that adds two numbers.
 *@n1: number
 *@n2: number
 *@r: pointer to buffer
 *@size_r: buffer size
 *Return: modifing the string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, x, y, i, j, k, digit_1, digit_2, sum;

	num = 0;
	x = strlen(n1);
	y = strlen(n2);

	if (x >= size_r - 1 || y >= size_r - 1)
	{
		return (0);
	}

	i = x - 1;
	j = y - 1;

	for (k = 0; i >= 0 || j >= 0; k++)
	{
		digit_1 = (i >= 0) ? n1[i] - '0' : 0;
		digit_2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = digit_1 + digit_2 + num;
		num = sum / 10;
		sum %= 10;
		if (k >= size_r - 1)
			return (0);

		r[k] = sum + '0';

		i--;
		j--;
	}
	if (num != 0)
	{
		if (k >= size_r - 1)
			return (0);
		r[k] = num + '0';
		k++;
	}
	r[k] = '\0';
	rev_string(r);
	return (r);
}
