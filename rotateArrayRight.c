#include<stdio.h>
int main()
{
    int n,i,d,j;
    printf("enter the number of element:");
    scanf("%d",&n);
    int arr[n];
    int temp[n];
    printf("enter the element of a array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter size of subarray");
    scanf("%d",&d);
    d=d%n;
    for(i=0;i<n;i++)
    {
        if(i<d)
        {
            printf("%d ",arr[n+i-d]);
        }
        else{
            printf("%d ",arr[i-d]);
        }
    }
    return 0;   
}