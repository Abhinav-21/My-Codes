#include <stdbool.h>
#include <stdio.h>
int main()
{
    int date, month, year;
    bool is_leap;

    printf("Enter date, month and year respectively:\n");
    scanf("%d%d%d", &date, &month, &year);

    if ((date > 0) && (date < 32) &&
        (month > 0) && (month < 13) &&
        (year > 0))
    {
        if (year % 4 == 0)
        {
            if ((year % 100 == 0) && (year % 400 != 0))
            {
                is_leap = false;
            }
            else
            {
                is_leap = true;
            }
        }
        else
        {
            is_leap = false;
        }

        if ((month == 4, 6, 9, 11) &&
            ((date > 30) || (date <= 0)))
        {
            printf("Invalid Date.\n");
        }
        else if ((month == 2) &&
                 ((date > 28 + is_leap) || (date <= 0)))
        {
            printf("Invalid Date.\n");
        }
        else if ((month == 1, 3, 5, 7, 8, 10, 12) &&
                 ((date > 31) || (date <= 0)))
        {
            printf("Invalid Date.\n");
        }
        else
        {
            printf("Date in Valid.\n");
        }
    }
    else
    {
        printf("Invalid date.\n");
    }

    return 0;
}
