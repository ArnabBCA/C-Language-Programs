#include <stdio.h>
  
int main()
{
    int i;
    int size;
    char val;
    printf("Enter the size of the array:");
    scanf("%d",&size);
  
    // Declaration of 2-D char array
    char array[size][20];
  
    // Initialization of 2-D char array
    for (i = 0; i < size; i++)
        scanf("%s", array[i]);
  
    // print the words
    for (i = 0; i < size; i++)
        printf("%s", array[i]);
    printf("Enter the element to search in the array:");
    scanf("%s",&size);
    for(i=0;i<size;i++)
    {
        if(array[i]==val)
        {
            printf("%d",i"position");
        }
    }
   
  
    return 0;
}