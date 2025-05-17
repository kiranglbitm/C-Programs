#include<stdio.h>
void main()
{
    int i,n,d,j,sum=0,value=0,k;
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
    for(i=0;i<n-1;i++)
    {
         sum=0;

        for(j=i;j<=d+i-1;j++)
        {
            sum+=arr[j];
            if(sum>value)
            {
                value=sum;
            }
           
        }
        if(value>sum)
        {
            for(j=i;j<=d+i-1;j++)
           {
                printf("%d\n",arr[j]);
           }
        }
    }

}