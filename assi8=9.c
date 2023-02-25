#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=i && j<=2*n-i)
            {
                printf("%d",k);
                if(j<n)
                   k++;
                else
                   k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}