#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter number of kilograms 'a' : ");
    scanf("%f",&a);
    b = 1000 * a;
    printf("Number of grams in 'a' kilograms = %f",b);
    return 0;

}
