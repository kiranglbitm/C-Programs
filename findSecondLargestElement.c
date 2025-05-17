#include<stdio.h>
void main()
{
    int n,arr[10],i,fl,sl;
    fl=-1;
    sl=-1;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(fl<arr[i])
        {
            
            sl=fl;
            fl=arr[i];
        }
    }
        printf("Second largest=%d\n",sl);


}