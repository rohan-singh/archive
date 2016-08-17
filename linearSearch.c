#include <stdio.h>
#define LIMIT 20

int array[LIMIT];

int linearSearch(int totalElements, int data);    

int main()
{

    int i, totalElements;
    printf("Enter the total number of elements : ");
    scanf("%i", &totalElements);
    
    printf("Enter the elements : \n");
    for(i = 0; i < totalElements; i++)
    {
        scanf("%i", &array[i]);
    }
    
    
    int data;
    printf("Enter data to be searched : ");
    scanf("%i", &data);
    
    if (linearSearch(totalElements, data))
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}

int linearSearch(int totalElements, int data) 
{
    int i;
    for (i = 0; i < totalElements; i++)
    {
        if (data == array[i])
            return 1;
    }
    return 0;
}
