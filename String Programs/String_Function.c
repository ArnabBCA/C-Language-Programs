#include <stdio.h>
#include <string.h>
void String_Case(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }    
    }
    printf("Converted string is %s\n",str);
}


void String_Length(char str[])
{
    int i;
    int count=0;
    for(i=0;str[i]!='\0';i++)
        {
            count=count+1;
        }
    printf("String lenth is %d\n",count);
}


void String_Palindrome(char str[])
{
    int i;
    char str2[20];
    char temp;
    int end, len;
    strlwr(str);                           // changing to lower case

    memcpy(str2,str,strlen(str)+1);       // Copying original string array to str2
    
    printf("Original String = %s\n", str);

    len = strlen(str);
    end = len - 1;

    for (i = 0; i < end; i++)
    {
        temp = str2[i];
        str2[i] = str2[end];
        str2[end] = temp;
        end--;
    }
    printf("Reversed String = %s\n ", str2);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==str2[i])
        {
            printf("Palindrome String");
            break;
        }
        else
        {
            printf("Not a Palindrome String");
            break;
        }
    }
}
int main()
{   int i;
    char str[20];
    printf("Enter the String\n");
    gets(str);
    
    String_Case(str);
    String_Length(str);
    String_Palindrome(str);

    return 0;
}