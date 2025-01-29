#include<stdio.h>
#include<math.h>
int fun(int n);
void main()
{
     int no,resul=0;
     printf("enter the value of power");
     scanf("%d",&no);
     resul=fun(no);
     printf("%d",resul);
}
int fun(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return 2*fun(n-1);
    }

}