#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints the opcode.
 * @argc: the number of arguments.
 * @argv: an array of strings
 * Return: 0 on success, 1 if failed
 */
int main(int argc, char *argv[])
{
	int num_by, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_by = atoi(argv[1]);

	if (num_by < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_pt = (unsigned char *)main;

	for (i = 0; i < num_by; i++)
	{
		printf("%02x", main_pt[i]);
		if (i != num_by - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
