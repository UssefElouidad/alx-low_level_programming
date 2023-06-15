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
	unsigned int len1 = 0, len2 = 0, j = 0, i;
	char *conc;

	while (s1[len1] && s1)
		len1++;
	while (s2[len2] && s2)
		len2++;

	if (n < len2)
	conc = malloc(sizeof(char) * (len1 + n + 1));
	else
		conc = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!conc)
		return (NULL);

	for (i = 0; i < len1; i++)
		conc[i] = s1[i];

	while (n < len2 && i < (len1 + n))
		conc[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		conc[i++] = s2[j++];

	conc[i] = '\0';

	return (conc);
}
