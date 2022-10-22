#include<stdio.h>
#define Size 10 
int Top=-1, inp_array[Size];

void Push()
{
	int x;
	if(Top==Size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element");
		scanf("%d",&x);
		Top=Top+1;
		inp_array[Top]=x;
	}
}
 
void Pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",inp_array[Top]);
		Top=Top-1;
	}
}
 
void show()
{
	if(Top==-1)
	{
		printf("\nEmpty Stack");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
        {
            printf("%d\n",inp_array[i]);
        }
			
	}
}

int main()
{
	int choice;
	while(1)	
	{
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		if(choice==1)
		{
			Push();
		}
		else if(choice==2)
		{
			Pop();
		}
		else if(choice==3)
		{
			show();
		}
		else if(choice==4)
		{
			break;
		}
		else
		{
			printf("\nInvalid choice!!");
		}
	}
}
 
