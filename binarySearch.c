#include <stdio.h>
#define LIMIT 20

int array[LIMIT];

int binarySearch(int totalElements, int data);    

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
    
    if (binarySearch(totalElements, data))
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}

int binarySearch(int totalElements, int data) 
{

    int start, mid, end;
    start = 0;
    end = totalElements - 1;
    
    while (start <= end) // if condition is start!=end then error
    {
        mid = (start + end) / 2;
               
        if (data == array[mid])
            return 1;    
        else if (data < array[mid])
            end = mid - 1;
        else if (data > array[mid])
            start = mid + 1;
    }
    return 0;

}
