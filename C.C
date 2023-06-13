#include <stdio.h>

void factors(int number)
{
    int i = 2;
    while (number != 1)
    {
        if (number % i == 0)
        {
            number /= i;
            if (number != 1)
                printf("%d x ", i);
            else
                printf("%d", i);
        }
        else
        {
            i += 1;
        }
    }
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Factors: ");
    factors(num);

    return 0;
}