#include<stdio.h>
#include <string.h>
#define size 10 
int main()
{ 
    int top=-1;
    int count=0;
    int del=0;
    int i;
    int j;
    char ex[size];
    char arr[size];
    printf("Enter the expression");
    scanf("%s",&ex);
    int length=strlen(ex);
    for(i=0;i<length;i++)
    {
        if(ex[i]=='(')
        {
            count=count+1;
            top=top+1;
	        arr[top]=ex[i];
        }
        else if(ex[i]==')')
        {
            top=top-1;
        }
        else
        {
            continue;
        }          
    }
    if(top==0)
    {
        printf("Your expression is ok");
    }
    else
    {
        printf("Wrong Expression")
    }

    for(j=0;j<top-1;j++)
    {
        printf("%c",arr[j]);
    }
    return 0;
}
