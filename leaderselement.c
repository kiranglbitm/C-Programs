#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number  of element in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element  in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c;
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
               c=0;
               break;

            }

        }
        if(c)
        {
            printf("%d ",arr[i]);

        }
        
    }
}