#include"main.h"
#include <stdio.h>
/**
 * times_table - a function that prints the 9 times table starting with 0
 * Return 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	result = i * j;

	if (j == 0)
	{
	
	printf("%d", result);
	}
	else if (result <= 9)
	{
	printf("   %d", result);
	}
	else if (result >= 10)
	{
	printf("  %d", result);
	}
	}

	printf("\n");
	}
}

