#include "main.h"
#include <stdlib.h>
/**
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total_len = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
		total_len++;
	}
	total_len += ac;


	str = malloc(sizeof(char) * total_len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
		k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\0';
		}
	}
	return (str);
}
