#include <stdio.h>
int main()
{
    int i;
    int j;
    int n=5;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        for(int k=1;k<=n;k++)  
        {  
            printf("0");  
        }  
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        for(int k=1;k<=n;k++)  
        {  
            printf("0");  
        }
        printf("\n");
    }
    return 0;
}