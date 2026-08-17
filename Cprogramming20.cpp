#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter height 'a' from the base : ");
    scanf("%f",&a);
    printf("Enter length 'b' of the base of the triangle : ");
    scanf("%f",&b);
    c = (a * b)/2;
    printf("Area of the triangle = %f units",c);
    return 0;

}
