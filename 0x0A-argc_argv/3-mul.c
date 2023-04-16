#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument vit.
 * mul: mul operation result.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
