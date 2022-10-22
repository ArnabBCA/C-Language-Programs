#include <stdio.h>
int main()
{   
    int i;
    int range;
    int a=1;
    int sum=0;
    int sum2=0;
    printf("Enter the n term");
    scanf("%d",&range);
    for(i=1;i<=range;i++)
    {
        if(i%2==0)
        {
            sum=sum*10;
            printf("%d\n",sum);
        }
        else
        {
            sum=sum*10+1;
            printf("%d\n",sum);
        }
    }
    return 0;
}