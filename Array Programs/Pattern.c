#include <stdio.h>
int main()
{
    int n=5;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int row=1;row<=n;row++)
    {
        for(int col=4;col>=row;col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}