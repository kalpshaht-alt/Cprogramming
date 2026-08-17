#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter principle amount 'a' : ");
    scanf("%f",&a);
    printf("Enter rate of intrest 'b' : ");
    scanf("%f",&b);
    printf("Enter number of years 'c' : ");
    scanf("%f",&c);
    d = (a*b*c) / 100;
    printf("Intrest after 'c' years = %f",d);
    return 0;

}
