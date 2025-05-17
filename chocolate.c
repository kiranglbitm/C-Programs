#include<stdio.h>
int main()
{
    int n,i,j,l,r,dd,ma;
    printf("enter the number of element of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=3;
     ma=100;
    for(i=0;i+m-1<n;i++)
    {
        dd=arr[i+m-1]-arr[i];
        if(dd<ma)
        {
             ma=dd;
        }
    }
   printf("%d",ma);
}