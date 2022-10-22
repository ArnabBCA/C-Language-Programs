#include <stdio.h>
#include <string.h>
int main()
{   int j;
    char x[10]={'a','b','c'};
    for(j=0;j<=strlen(x);j++)
    {
        printf("%c",x[j]);
    }
    printf("%d",strlen(x));
}