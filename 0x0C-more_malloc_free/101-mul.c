#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply_numbers(char *num1, char *num2)
{
	int result;
	char *endptr;

	result = strtol(num1, &endptr, 10) * strtol(num2, &endptr, 10);
	return (result);
}

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int result;

	if (argc != 3)
{
	printf("Error\n");
	return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	result = multiply_numbers(num1, num2);
	printf("%d\n", result);

	return (0);
}

