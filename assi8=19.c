#include<stdio.h>
int main()
{
    int i,j,lines,k;
    printf("enter the lines:");
    scanf("%d",&lines);
    for(i=1;i<=2*lines;i++)
    {
        for(j=1;j<=2*lines;j++)
        {
            if(i==lines+1)
            {
                if(j<lines-3 || j>lines+3)
                    printf("*");
                else if(j>10 || j<10)
                       printf("");
                else
                       printf("MYSIRG");
                       
             }
             else if(i<=lines)
             {
                if(i>=lines-2)
                {
                    if(j<=lines)
                    {
                        if(j>lines-i && j<=i-1)
                           printf("*");
                        else
                           printf(" ");
                    }
                    else
                    {
                        if(j>=2*lines-i+1 && j<=2*i+1)
                        {
                            printf("*");
                        }
                        else
                            printf(" ");
                        
                    }
                }    
                      

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