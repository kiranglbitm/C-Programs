#include<stdio.h>
void calFabo(int n);
void main()
{
    int no,factorial=0;;
    printf("enter the term you want to find fabonacii:");
    scanf("%d",&no);
       calFabo(no);
}
void calFabo(int n)
{
    int i,first=0,second=1,third=0;
    printf("\n%d\n%d",first,second);
    for(i=2;i<n;i++)
    {
        third=first+second;
        printf("\n%d",third);
        first=second;
        second=third;
    }

}
