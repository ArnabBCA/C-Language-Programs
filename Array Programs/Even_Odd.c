#include<stdio.h>
int main()
{
    int i;
    int j=0;
    int k=0;
    int size;
    int arr[20];
    int odd[20];
    int even[20];
    printf("Enter the size of the array");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the numbers");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        else if(arr[i]%2==0)
        {
            //printf("\neven %d",arr[i]);
            even[j]=arr[i];
            j++;
            
        }
        else
        {
            //printf("\nodd %d",arr[i]);
            odd[k]=arr[i];
            k++;
        }
    
    }
    printf("\nEven elements are\n");
    for(i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nOdd elements are\n");
    for(i=0;i<k;i++)
    {

        printf("%d ",odd[i]);
    }
    return 0;
}
