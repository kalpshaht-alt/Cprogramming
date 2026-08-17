#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter temprature in Fahrenheit 'a' : ");
    scanf("%f",&a);
    b =  0.55 * (a - 32) ;
    printf("'a' degree Fahrenheit in celcius = %f",b);
    return 0;
}
