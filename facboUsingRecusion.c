#include<stdio.h>
int calFabo(int n);
void main()
{
    int no,i;
    printf("Enter the number you want to find fabonacii:");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
     printf("%d\n",calFabo(i));

    }
}
int  calFabo(int n)
{
   if(n==0)
   {
            return 0;

   }
   else if(n==1)
   {
         return 1;
   }
   else
   {
       return calFabo(n-1)+calFabo(n-2);

   }
}
