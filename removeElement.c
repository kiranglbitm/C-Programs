#include<stdio.h>
void main()
{
    int n,i,c=0;
    printf("enter the  number of element of array");
    scanf("%d",&n);
    int arr[n];
    arr[n]=0;
    printf("enter the element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int tem[n];
    tem[0]=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            tem[c]=arr[i];
            c++;

        }
    }
    printf("After removing duplicate:");
    for(i=0;i<c;i++)
    {
        printf("%d\n",tem[i]);
    }


}