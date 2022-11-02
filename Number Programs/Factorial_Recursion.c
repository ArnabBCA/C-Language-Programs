#include <stdio.h>
long factorial(int i)
{
    if(i==0)
    {
        return 1;
    }
    else
    {
        return i* factorial(i-1);

    }
}
void main()
{
    int i=5;
    printf("%d",factorial(i));
}