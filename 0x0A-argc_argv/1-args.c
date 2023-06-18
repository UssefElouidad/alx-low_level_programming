#include"main.h"
#include<stdio.h>
/**
 * main - print the number of arguments passed int the function
 * @argc: argument counter.
 * @argv: the arguments countent.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n",argc - 1);
		return (0);
}
