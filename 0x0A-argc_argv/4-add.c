#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
/**
 * check_num - checks if content is a number
 * @str: a pointer to string.
 * Return: Always 0.
 */
int check_num(char *str)
{

	unsigned int count = 0;

	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}
/**
 * main -  a program that adds positive numbers.
 * @argc: argumrnts count.
 * @argv: arrgument conent.
 * Return: 0 if success 1 if failed.
 */
int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);
				sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
