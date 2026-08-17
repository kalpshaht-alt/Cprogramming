#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter number of bytes 'a' : ");
    scanf("%f",&a);
    b = a/1024; //kb
    c = b/1024; //mb
    d = c/1024; //gb
    printf("'a' bytes = %f KB\n",b);
    printf("'a' bytes = %f MB\n",c);
    printf("'a' bytes = %f GB\n",d);
    return 0;
}
