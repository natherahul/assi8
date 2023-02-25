#include<stdio.h>
int main()
{
    int i,j,lines;
    printf("enter the lines:");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=lines;j++)
        {
            if(j<=lines-i+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}