#include<stdio.h>
void main()
{
    int i,j,d,n,sum=0,sumup =0;
    printf("enter the  number of element in array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in array:");
    sumup=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum +=arr[i];
        if(sum>sumup)
            sumup = sum;
        
        if(sum < 0)
            sum=0;
        
    }
    printf("sum=%d",sumup);
}