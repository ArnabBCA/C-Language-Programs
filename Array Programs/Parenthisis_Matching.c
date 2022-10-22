#include<stdio.h>
#include <string.h>
#define size 10 
int main()
{ 
    int top=-1;
    int count=0;
    int i;
    int j;
    char ex[size];
    char arr[size];
    printf("Enter the expression");
    scanf("%s",&ex);
    //printf("%s",ex);
    for(i=0;i<(strlen(ex));i++)
    {
        //printf("%c\n",ex[i]);
        if(ex[i]=='(')
        {
            count=count+1;
            top=top+1;
	        arr[top]=ex[i];
            printf("%c",ex[i]);
        }

    }
    for(j=0;j<strlen(arr);j++)
    {
        printf("%c",arr[j]);
    }
    printf("%d\n",strlen(arr));
    return 0;
}
