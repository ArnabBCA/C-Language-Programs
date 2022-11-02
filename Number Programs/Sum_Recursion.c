#include<stdio.h>
int sumof(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return num + sumof(num-1);
    }
}
int main()
{
    int num=12;
    printf("%d",sumof(num));
}