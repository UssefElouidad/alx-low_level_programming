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
	int mul;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
	mul = i * j;
		printf("%d\n", mul);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
