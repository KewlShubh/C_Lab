#include<stdio.h>
#include<math.h>
struct distance
{
    float f;
    float i;
}d1,d2;

int main()
{
    int a;
    printf("Enter 1st distance\n");
    printf("Enter feet: ");
    scanf("%f",&d1.f);
    printf("Enter inch: ");
    scanf("%f",&d1.i);
    printf("Enter 2nd distance\n");
    printf("Enter feet: ");
    scanf("%f",&d2.f);
    printf("Enter inch: ");
    scanf("%f",&d2.i);
    a=(d1.i+d2.i)/12;
    printf("Sum of distances = %.2f' - %.2f''",d1.f+d2.f+a,fmod((d1.i+d2.i),12));
    return 0;
}