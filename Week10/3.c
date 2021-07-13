#include <stdio.h>
#include <string.h>

typedef enum
{
    JAN = 31,
    FEB = 28,
    MAR = 31,
    APR = 30,
    MAY = 31,
    JUN = 30,
    JUL = 31,
    AUG = 31,
    SEP = 30,
    OCT = 31,
    NOV = 30,
    DEC = 31
} month_days;

month_days list[12] = {JAN,
                       FEB,
                       MAR,
                       APR,
                       MAY,
                       JUN,
                       JUL,
                       AUG,
                       SEP,
                       OCT,
                       NOV,
                       DEC};

char *month_list[12] = {"JAN",
                        "FEB",
                        "MAR",
                        "APR",
                        "MAY",
                        "JUN",
                        "JUL",
                        "AUG",
                        "SEP",
                        "OCT",
                        "NOV",
                        "DEC"};
int main()
{
    printf("Enter a date (number 3 letter upper case month e.g. 31 JAN)\n");
    int date;
    char month[15];
    scanf("%d %s", &date, month);
    int month_index;
    for (int i = 0; i < 12; i++)
    {
        if (strcmp(month, month_list[i]) == 0)
        {
            month_index = i;
            break;
        }
    }
    month_days now = list[month_index];
    if (date == (int)now)
    {
        date = 1;
        month_index = (month_index + 1) % 12;
    }
    else
    {
        date++;
    }
    printf("Tomorrow is %d %s", date, month_list[month_index]);
}