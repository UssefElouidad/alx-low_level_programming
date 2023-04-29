#include<stdio.h>
void first(void)__attribute__((constructor));

/**
 * first - prints a sentence befor the main function
 */
void first(void)
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore mu house upon my back!\n");
}
