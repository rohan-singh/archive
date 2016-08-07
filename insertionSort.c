#include <stdio.h>

//function prototype
void insertionSort(int arr[], int size);

int main(void) 
{
    int i, size;
    printf("Enter the number of elements: ");
    scanf("%i", &size);
    int arr[size];

    for(i = 0; i < size; i++)
    {
        scanf("%i", &arr[i]);
    }

    //function call
    insertionSort(arr, size);
    
    //printing the Sorted Array
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

void insertionSort(int arr[], int size) 
{
    int i, j;
    int key;
    for(j = 1; j < size; j++)
    {
        key=arr[j];
        i = j-1;
        while(i >= 0 && arr[i] > key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i + 1]=key;
    }
}

