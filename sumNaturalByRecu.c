#include<stdio.h>
int sumNatural(int n);
void main()
{
    int no,sum;
    printf("enter the number:");
    scanf("%d",&no);
    sum=sumNatural(no);
    printf("sum of natural number%d",sum);


}
int sumNatural(int n)
{
     if(n==0)
     {
          return 0;
     }
     else{
        return(n+sumNatural(n-1));
     }
}
