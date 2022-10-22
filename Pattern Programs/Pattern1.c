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
        for(j=1;j<=i-1;j++)
        {
            printf("%d",j);
        }
        for(j-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        for(j=1;j<=i-1;j++)
        {
            printf("%d",j);
        }
        for(j-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}