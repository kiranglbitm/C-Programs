#include<stdio.h>
void main()
{
    int num;
    printf("enter  number :");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive no",num);
    }
    else if(num<0)
    {
        printf("%d is negative no",num);
    }
    else
    {
        printf("this number is number ");
    }
}