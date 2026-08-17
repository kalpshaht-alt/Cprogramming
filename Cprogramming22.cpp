#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter gross sales amount : ");
    scanf("%f",&a);
    b = a - (a*0.1);
    printf("Net sales amount = %f rupees",b);
    return 0;
}
