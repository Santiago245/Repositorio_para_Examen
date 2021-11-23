#include <stdio.h>

int main() {
    int day, month, year;
    scanf_s("%i", &day);
    scanf_s("%i", &month);
    scanf_s("%i", &year);

    day = day + 1;
    bool CM;
    if ((day == 4 + 1) && (month == 10) && (year == 1582))
    {
        day = day + 10;
        CM = 1;
    }
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                CM = 1;
            }
            else
            {
                CM = 0;
            }
        }
        else
        {
            CM = 1;
        }
    }
    else
    {
        CM = 0;
    }

    if (day >=1 && day <=32)
    {
        if (day == 32)
        {
            if (day == 32 && month != 4 && month != 6 && month != 9 && month != 11 && month != 2)
            {
                day = 1;
                month = month + 1;
                printf("%2i %2i %4i", day, month, year);
            }
        }
        else
        {
            printf("%2i %2i %4i", day, month, year);
        }
        if (day == 31)
        {
            if (day == 31 && month == 4 && month == 6 && month == 9 && month == 11 && month != 2)
            {
                day = 1;
                month = month + 1;
                printf("%2i %2i %4i", day, month, year);
            }
        }
    }
    else {
        if (month == 2 && day > 28) 
        {
            if (day == 29) {
                if (CM == 1) {
                    printf("%2i %2i %4i", day, month, year);
                }
                else {
                    month = month + 1;
                    day = 1;
                    printf("%2i %2i %4i", day, month, year);
                }
            }
            else {
                month = month + 1;
                day = 1;
                printf("%2i %2i %4i", day, month, year);
            }
        }
        else {
            printf("%2i %2i %4i", day, month, year);
        }
    }
    return 0;
}
