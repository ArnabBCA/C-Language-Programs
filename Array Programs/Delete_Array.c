#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int size, i;
    int num;
    int del;
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
    printf("Enter the position of the element to delete from the array");
    scanf("%d",&del);
    for (i=del;i<size-1;i++)
    {
        ptr[i]=ptr[i+1];
    }
    printf("The elements of the array after deletion: ");
    for (i = 0; i < size-1; ++i) 
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}