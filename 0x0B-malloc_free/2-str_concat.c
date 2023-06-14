#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenate two strings
 * @s1: first string.
 * @s2: second string.
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int lena = 0, lenb = 0;
	unsigned int i, j;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lena] != '\0')
		lena++;

	while (s2[lenb] != '\0')
		lenb++;

	conc = malloc((lena + lenb + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < lena; i++)
		conc[i] = s1[i];
	for (j = 0; j < lenb; j++)
		conc[i++] = s2[j];
	conc[i] = '\0';

	return (conc);
}
