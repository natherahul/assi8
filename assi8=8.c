#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n+i-1)
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