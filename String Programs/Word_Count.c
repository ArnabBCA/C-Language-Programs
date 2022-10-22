#include <stdio.h>
int main()
{   int i;
    int count=1;
    char str[20];
    printf("Enter the String\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' && str[i-1]!=' ')
        {
            count=count+1;
        }
    }
    printf("Number of Words is %d",count);
    return 0;
}