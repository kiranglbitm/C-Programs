#include<stdio.h>
void main()
{
    int i,n,maxCount=0,count=0;
    printf("enter the number of  element in array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count=0;
        }
        else if(arr[i]==1)
        {
            count++;
            if(count>maxCount)
            {
              maxCount=count;

            }


        }    
    }
     printf("max count =%d",maxCount);

}
