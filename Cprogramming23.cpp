#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Marks scored in maths : ");
    scanf("%f",&a);
    printf("Marks scored in english : ");
    scanf("%f",&b);
    printf("Marks scored in science : ");
    scanf("%f",&c);
    d = a + b + c;
    e = (a+b+c)/3;
    printf("Total marks scored out of 300 = %f\n",d);
    printf("Average score for 3 subjects = %f",e);
    return 0;
}
