#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter length' a' of rectangle : ");
    scanf("%f",&a);
    printf("Enter width 'b' of rectangle : ");
    scanf("%f",&b);
    c = a*b;
    d = (a+b)*2;
    printf("Area of rectangle = %f units\n",c);
    printf("Perimeter of rectangle = %f units",d);
    return 0;




}
