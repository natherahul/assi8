#include<stdio.h>
int main()
{
    int i,j,lines;
    printf("enter the lines:");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=i && j<=2*lines-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}