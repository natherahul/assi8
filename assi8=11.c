#include<stdio.h>
int main()
{
    int i,j,k,lines;
    printf("enter the lines:");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        k='A';
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines-i+1 && j<=lines+i-1)
            {
                printf("%c",k);
                if(j<lines)
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