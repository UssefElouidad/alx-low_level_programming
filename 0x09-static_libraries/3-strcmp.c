#include "main.h"
/**
 * _strcmp - compare two strings.
 * @st1: string to be compared.
 * @st2: string to be comared to.
 * Return: Diffrence.
 */
int _strcmp(char *st1, char *st2)
{
	while ((*st1 != '\0' && *st2 != '\0') && *st1 == *st2)
	{
	st1++;
	st2++;
	}
	if (*st1 == *st2)
	{
	return (0);
	}
	else
	{
	return (*st1 - *st2);
	}
}
