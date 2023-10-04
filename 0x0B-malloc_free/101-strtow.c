#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - a function that splits a string into words
 * @str: argument vector
 * Return: Always 0
*/

char **strtow(char *str)
{
	int i, words;
	char **result, *token, *copy;

	if (str == NULL || *str == '\0')
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
		return (NULL);

	i = 0, words = 0;
	while (copy[i] != '\0')
	{
		while (copy[i] == ' ' && copy[i] != '\0')
			i++;
		if (copy[i] != ' ' && copy[i] != '\0')
			words++;
		while (copy[i] != ' ' && copy[i] != '\0')
			i++;
	}

	if (words == 0)
		return (NULL);

	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);

	token = strtok(copy, " ");
	i = 0;
	while (token != NULL)
	{
		result[i] = strdup(token);
		if (result[i] == NULL)
			return (NULL);
		token = strtok(NULL, " ");
		i++;
	}
	result[i] = NULL;
	return (result);
}
