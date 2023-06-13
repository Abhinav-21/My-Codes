#include <stdio.h>
#define foo(x, y) x / y + x
int main()
    {
        int i = -6, j = 3;
        printf("%d\n",foo(i + j, 3));
        return 0;
    }