#include <stdio.h>
int main()
{   
    int size;
    int value;
    printf("Enter the size of the Array");
    scanf("%i",&size);
    int arr[size];
    for (int i=0;i<size;i++)
    {
        printf("Enter the Elements");
        scanf("%i",&arr[i]);
    }
    printf("Enter the Value to be searched");
    scanf("%i",&value);
    for (int j=0;j<size;j++) 
    {
        if(value==arr[j])
        {
            printf("Element found at position %i",j);
            break;
        }
        
    }
    return 0;
}