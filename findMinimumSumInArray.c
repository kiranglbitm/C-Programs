#include<stdio.h>
void main()
{
    int i,n,d,j,sum=0,newsum=0;
    printf("enter the number of element of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the size of subarray:");
    scanf("%d",&d);
    newsum = __INT_MAX__;
    for(i=0;i<n-1;i++)
    {
         sum=0;

        for(j=i;j<=d+i-1;j++)
        {
            sum+=arr[j];
           
        }
            if(sum<newsum)
            {
                newsum=sum;
            }
    }
    printf("miniimum sum of a subarray of size k=%d",newsum);

}