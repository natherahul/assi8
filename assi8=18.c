#include<stdio.h>
int main()
{
    int i,j,lines;
    printf("enter the lines:");
    scanf("%d",&lines);
    for(i=1;i<=2*lines-1;i++)
    {
        for(j=1;j<=2*lines-1;j++)
        {
            if(i<=lines)
            {
                if(j>=lines-i+1 && j<=lines+i-1)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
            else{
                if(j>=i-lines+1 && j<=2*lines-i+lines-1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}