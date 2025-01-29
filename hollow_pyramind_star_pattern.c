#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            if(k==1||k==2*i-1)
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }

        }
        printf("\n");
    }
     for(i=1;i<=2*n-1;i++)
        {
            printf("*");
        }
        
}


