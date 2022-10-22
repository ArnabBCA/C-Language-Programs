#include<stdio.h>
int main()
{	int fsum=1;
	int sum1=1;
	int i;
	int j;
	int k;
	/*for (i=1;i<=5;i++)
	{
		if(i%2==0)
		{
			//printf("-%d\n",i);
			sum1=sum1-(i*i);
		}
		else
		{
			//printf("+%d\n",i);
			sum1=sum1+(i*i);
		}
	}
	printf("\n%d",sum1);
	*/
	for (j=1;j<=5+4;j=j+2)
	{
		//printf("\n%d",j);
		for(k=j;k>=1;k--)
		{
			printf("%d",k);
			fsum=fsum*k;
		}
		printf("\n");
		sum1=sum1+fsum;
	}
	printf("\n%d",sum1);
	
}