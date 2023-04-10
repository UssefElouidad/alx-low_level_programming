#include <stdio.h>
/**
 * main - entry point.
 * @argc: argument count.
 * @argv: array of argument.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
