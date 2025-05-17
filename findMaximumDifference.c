#include<stdio.h>
int fun(int arr[], int n)
{
     int maxd,ud=0;
     for(int i=0;i<n-1;i++)
     {
        maxd=0;
        maxd=arr[i+1]-arr[i];
        if(maxd>ud)
        {
            ud=maxd;
        }
     }
     return ud;
}
void main()
{
    int n,i;
    printf("enter the number of element  of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int res;
    res=fun(arr,n);
    printf("%d",res);
}