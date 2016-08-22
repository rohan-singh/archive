#include <stdio.h>
#include "tools.h"

//function prototypes
int partition(int* a, int beg, int end);
void quick_sort(int* a, int beg, int end);

//global declarations
int arr[] = {45, 60, 55, 80, 85, 75, 50, 65};

int main()
{
int i, beg, end;
beg = 0; end = 7;

//printing unsorted array
printf("Unsorted array : \n");
for (i = beg; i <= end; i++)
    printf("%i ", arr[i]);
printf("\n");

quick_sort(arr, beg, end);

//printing sorted array
printf("Sorted array : \n");
for (i = beg; i <= end; i++)
    printf("%i ", arr[i]);
printf("\n");  

return 0;      
}

int partition(int* A, int beg, int end)
{
     int pivot, wall;
     pivot = A[end]; 
     wall = beg;
     // Compare remaining array elements against pivotValue = A[hi]
     int curr;
     for (curr = beg; curr <= end; curr++)
     {
         if (A[curr] < pivot)
         {
             swap(&A[curr],&A[wall]);
             wall++;
         }
     }
     swap(&A[wall],&A[end]);  // Move pivot to its final place
     return wall;
}

void quick_sort(int* a, int beg, int end)
{
        int q;
    if(beg < end)
    {
    q = partition(arr, beg, end);
        quick_sort(arr, beg, q-1);
        quick_sort(arr, q+1, end);

    }
    
}
