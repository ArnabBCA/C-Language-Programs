#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int size, i,j;
    int num;
    int count=1;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    ptr = (int*)malloc(size * sizeof(int));
    printf("Enter the elements.\n");
    for (i = 0; i < size; ++i) 
    {   
        scanf("%d",&num);
        ptr[i] = num;
    }
    printf("The elements of the array are: ");
    for (i = 0; i < size; ++i) 
    {
        printf("%d ", ptr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ptr[i]==ptr[i+1] )
            {
            printf("Duplicate Element is = %d\n",ptr[i]);
            count=count+1;
            }
        }
        
    }
    printf("Element is repeated = %d\n",count);
    return 0;
}