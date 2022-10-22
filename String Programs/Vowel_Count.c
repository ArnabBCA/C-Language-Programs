#include <stdio.h>
int main()
{   int i;
    int vcount=0;
    int ccount=0;     
    char str[20];
    printf("Enter the String\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
             vcount=vcount+1;
        }
        else if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
        {
            ccount=ccount+1;
        }
        
    }
    printf("Number of vowels in the string is %d\n",vcount);
    printf("Number of consonent in the string is %d\n",ccount);
    return 0;
}