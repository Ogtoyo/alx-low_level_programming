#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count(size)
 * @av: argument vector
 * Return: Always 0
*/

char *argstostr(int ac, char **av)
{
	char *ptr_av;
	int totalLen, i, j, k = 0;

	totalLen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			totalLen++;
		totalLen++;
	}

	ptr_av = (char *)malloc((totalLen + 1) * sizeof(char));

	if (ptr_av != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				ptr_av[k] = av[i][j];
				k++;
			}
			ptr_av[k] = '\n';
			k++;
		}
		ptr_av[k] = '\0';
		return (ptr_av);
	}

	return (NULL);
}
