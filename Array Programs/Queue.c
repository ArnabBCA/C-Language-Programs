#include<stdio.h>
#define size 10 
int top=-1;
int rear=-1;
int arr[size];

void Enque()
{
	if(rear==size-1)
	{
		printf("\nOver Flow\n");
	}
	else
	{
		top=0;
		int x;
		printf("\nEnter element ");
		scanf("%d",&x);
    	rear=rear+1;
		arr[rear]=x;
	}
    
}
void Dequeue()
{
    if(top==-1 && rear==-1)
    {
        printf("\nUnder Flow\n");
    }
    else if(top==rear)
	{
		printf("\nDequeued element is %d\n",arr[top]);
		top=-1;
		rear=-1;
	}
	else
    {
        printf("\nDequeued element is %d\n",arr[top]);
        top=top+1;
    }
}
void Peek()
{
	if(top==-1 && rear==-1)
	{
		printf("\nQueue is Empty\n");
	}
	else
	{
		printf("\nFront Element is %d\n",arr[top]);
		printf("\nRear Element is %d\n",arr[rear]);
	}
	
}

void show()
{
	int i=0;
    if(top==-1 && rear==-1)
	{
		printf("\nQueue is Empty\n");
	}
    else
    {
		printf("\nElements in the Queue\n");
        for (i = top; i <= rear; i++)
        {
            printf("\n%d\n",arr[i]);          
        }
    }  
}

int main()
{
	int choice;
	while(1)	
	{
		printf("\n1.Add a element\n2.Remove the element\n3.Peak the element\n4.Show the Queue\n5.End");
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		if(choice==1)
		{
			Enque();
		}
		else if(choice==2)
		{
			Dequeue();
		}
		else if(choice==3)
		{
			Peek();
		}
		else if(choice==4)
		{
			show();
		}
        else if(choice==5)
        {
            break;
        }
		else
		{
			printf("\nInvalid choice!!");
		}
	}
}
 
