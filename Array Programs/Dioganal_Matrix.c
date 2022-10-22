#include<stdio.h>
int main()
{
 	int i, j, rows, columns, a[10][10], Sum = 0;
    printf("\n Please Enter Number of rows :");
 	scanf("%d",&i);
    printf("\n Please Enter Number of columns :");
    scanf("%d",&j);
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
    for(i=0;i<)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		printf("%d",i);
    	}
        printf("%d",j);
  	}
   	  
 	for(rows = 0; rows < i; rows++)
  	{
   		Sum = Sum + a[rows][rows];
  	}
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;
}