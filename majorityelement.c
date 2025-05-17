#include<stdio.h>
void main()
{
    int  n,i,c,j,major;
    printf("enter the number of element of array:");
    scanf("%d",&n);
    int arr[n];
    arr[n]=0;
    printf("enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
          if(arr[i]==arr[j])
          {
            c++;

          }
          if(c>n/2)
          {
                  major = arr[i];

          }
            
          }

    }
    printf("majority Element=%d",major);


}