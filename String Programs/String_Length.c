#include <stdio.h>
int main()
{ 
    int i;
    int count=0;
    char str[20];
    printf("Enter the String\n");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        count=count+1;
    }
    printf("%d",count);
    return 0;
}