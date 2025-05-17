#include<stdio.h>
void main()
{
    int i,n,e=0,o=0;
    printf("enter the number of element of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
}
printf("Length of even subarray=%d\n",e);
printf("Length of odd subarray=%d\n",o);


}