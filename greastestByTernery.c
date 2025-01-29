#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the value of three variable");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>b&&a>c)?printf("greatest no=%d",a):b>c?printf("greatest no=%d",b):printf("greatest no=%d",c);

}   