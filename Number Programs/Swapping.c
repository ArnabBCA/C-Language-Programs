#include <stdio.h>
void swapping(int *a,int *b)
{
	int temp=*a;
    *a=*b;
    *b=temp;
    printf("%d\n",*a);
    printf("%d\n",*b);
}

void main()
{
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
    
	swapping(&a,&b);
	printf("After Swap\n");
	printf("%d\n",a);
    printf("%d\n",b);
}