#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function which duplicate to a new memory location
 * @str: the string to duplicate.
 * Return: NULL.
 */
char *_strdup(char *str)
{
	char *a;
	int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		a[r] = str[r];
	return (a);
}
