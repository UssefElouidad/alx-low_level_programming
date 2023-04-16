#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument vit.
 * @i: int number 1.
 * @j: int number 2.
 * mul: mul operation result.
 * Retur: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0;
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
