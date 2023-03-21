#include <stdio.h>

/**
 * main - enrty point
 *
 * return : always 0 (success)
 *
 */

int main(void)
{
	printf("Size of a char :%d byte(s)", sizeof(char));
	printf("size of an int :%d byte(s)", sizeof(int));
	printf("size of a long int :%d byte(s)", sizeof(long int));
	printf("size of a float :%dbyte(s)", sizeof(float));
	return (0);
}
