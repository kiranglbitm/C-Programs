#include<stdio.h>
void main()
{
   int n,rem=0,res=0,num;
   printf("Enter the number to check Armstrong or not:");
   scanf("%d",&n);
   num=n;
   while(n>0)
   {
       rem=n%10;
       res+=rem*rem*rem;
       n=n/10;

   }
   printf("Reverse: %d",res);
   if(res==num)
   {
    printf("\nArmstrong number");
   }
   else{
    printf("\nnot a pallindrome");
   }
}