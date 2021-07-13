#include <stdio.h>

int bin_ser(int *a, int n, int s)
{
    int m = 0;
    while (m != n)
    {
        int c = (m + n) / 2;
        if (*(a + c) == s)
        {
            return c + 1;
        }
        else
        {
            if (*(a + c) > s)
            {
                n = c - 1;
            }
            else

            {
                m = c + 1;
            }
        }
    }
}

void even(int *a, int n, int s)
{
    if (s % 2 == 0 && bin_ser(a, n, s) > -1)
    {
        printf("The number is even and found at position %d\n", bin_ser(a, n, s));
    }
    else if (bin_ser(a, n, s) < 0)
    {
        printf("The number is even and not found in the array");
    }

    else
    {
        printf("Not found\n");
    }
}

void lessthan22(int *a, int n, int s)
{
    if (s < 22 && bin_ser(a, n, s) > -1)
    {
        printf("The number is less than 22 and found at position %d\n", bin_ser(a, n, s));
    }
    else if (bin_ser(a, n, s) < 0)
    {
        printf("The number is less than 22 and not found in the array");
    }
    else
    {
        printf("Not found\n");
    }
}

int main()
{
    int a[100] = {2, 4, 5, 7, 8, 12, 15, 16, 18, 19, 20, 22, 56};
    int s, n = 13;
    printf("Enter the element to be searched:");
    scanf("%d", &s);
    even(a, n, s);
    lessthan22(a, n, s);
    return 0;
}