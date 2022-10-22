#include <stdio.h>
int main()
{
    int a=0;
    int b=1;
    int sum=a+b;
    int size;
    printf("Enter size of the Fibonacci Series");
    scanf("%i",&size);
    printf("%i\n",a);
    printf("%i\n",b);
    for(int i=0;i<size-2;i++) 
    {
        printf("%i\n",sum);
        a=b;
        b=sum;
        sum=a+b;
    }
    return 0;
}