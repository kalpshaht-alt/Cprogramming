#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter temprature in celcius 'a' : ");
    scanf("%f",&a);
    b =  (1.8 * a) + 32.0 ;
    printf("'a' degree celcius in Fahrenheit = %f",b);
    return 0;
}
