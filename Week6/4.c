#include<stdio.h>

struct complex
{
    float re,im;
}a,b;

void sum(struct complex a, struct complex b)
{
    printf("Sum = %.2f + %.2fi\n",(a.re + b.re),(a.im + b.im));
}
void difference(struct complex a, struct complex b)
{
    printf("Difference = %.2f - %.2fi",(a.re - b.re),(a.im - b.im));
}
int main()
{
    printf("For 1st complex number\nEnter the real and imaginary parts: ");
    scanf("%f\n%f",&a.re,&a.im);
    printf("For 2nd complex number\nEnter the real and imaginary parts: ");
    scanf("%f\n%f",&b.re,&b.im);
    sum(a,b);
    difference(a,b);
}