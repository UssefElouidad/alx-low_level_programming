#include <stdio.h>

/**
 * main - enrty point
 *
 * return : always 0 (success)
 *
 */

int main(void)
{
	printf("Size of a char :%d byte(s)\n", sizeof(char));
	printf("size of an int :%d byte(s)\n", sizeof(int));
	printf("size of a long int :%d byte(s)\n", sizeof(long int));
	printf("size of a float :%dbyte(s)\n", sizeof(float));
	return (0);
}
