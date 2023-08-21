#include <stdio.h>
int div(int a, int b)
{
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}
