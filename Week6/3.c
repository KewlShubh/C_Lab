#include<stdio.h>

struct date
{
    int d,m,y;
}d1,d2;

int main()
{
    printf("Enter Date1 in the format dd/mm/yyyy\n");
    scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
    printf("Enter Date2 in the format dd/mm/yyyy\n");
    scanf("%d/%d/%d",&d2.d,&d2.m,&d2.y);
    printf("Date1 = %d/%d/%d\n",d1.d,d1.m,d1.y);
    printf("Date2 = %d/%d/%d\n",d2.d,d2.m,d2.y);
    if(d1.y==d2.y)
    {
        if(d1.m==d2.m)
        {
            if(d1.d==d2.d)
                printf("Date1 is equal to Date2");
            else if(d1.d>d2.d)
                printf("Date1 is greater to Date2");
            else
                printf("Date1 is smaller to Date2");
        }
        else if(d1.m>d2.m)
            printf("Date1 is greater to Date2");
        else
            printf("Date1 is smaller to Date2");
    }
    else if(d1.d>d2.d)
            printf("Date1 is greater to Date2");
    else
            printf("Date1 is smaller to Date2");
    return 0;
}