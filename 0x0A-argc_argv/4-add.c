#include "main.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument value.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *p;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		for (k = 0; k < strlen(p); k++)
		{
			if (p[k] < 48 || p[k] > 57)
			{
			printf("Error\n");
			return (1);
			}
		}
	sum += atoi(p);
	p++;
	}
	printf("%d\n", sum);
}
else
{
	printf("0\n");
}
return (0);
}
