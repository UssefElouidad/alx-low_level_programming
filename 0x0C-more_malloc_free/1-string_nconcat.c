#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a finction that concatenates two strings
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 * Return: poniter if success, NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	conc = malloc(sizeof(char) * (len1 + n + 1));

	if (conc == NULL)
		exit(98);

	for (i = 0; i < len1; i++)
		conc[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		conc[i] = s2[j];

	return (conc);
}
