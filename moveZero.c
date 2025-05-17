#include<stdio.h>
int main()
{
    int n,i,l,r;
    printf("enter the  number of element of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in array");
    for(i=0;i<n;i++)
    {
          scanf("%d",&arr[i]);

    }
    l=0;
    r=n-1;
    while(l<=r)
    {
            if(arr[l]==0)
            {
              int t=arr[l];
              arr[l]=arr[r];
              arr[r]=t;
              r--;
            }
            else
            {
                  l++;

            }

        
    }
    for(i=0;i<n;i++)
    {
          printf("%d",arr[i]);

    }
}