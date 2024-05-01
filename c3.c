#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc == 2) {
        printf("%s\n",argv[1]);
    }
    else if (argc > 2) {
        printf("Demo1\n");
    }
    else {
        printf("Demo2\n");
    }
    return 0;
}