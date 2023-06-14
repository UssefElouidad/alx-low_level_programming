#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 * @str: the string given as a parameter
 * Return: returns a pointer to a new string, NULL on failure.
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int lentgh;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[lentgh] != '\0')
		lentgh++;

	duplicate = malloc((lentgh + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < lentgh; i++)
		duplicate[i] = str[i];

	duplicate[lentgh] = '\0';

		return (duplicate);
		free(duplicate);
}



