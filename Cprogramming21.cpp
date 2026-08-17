#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter gross salary amount 'a' : ");
    scanf("%f",&a);
    printf("Enter allowance amount : ");
    scanf("%f",&b);
    c = (a-(0.03*a)) + (b-(0.1*b));
    printf("Net salary amount = %f rupees",c);
    return 0;
}
