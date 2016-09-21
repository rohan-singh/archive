#include <stdio.h>

//prototypes
void merge_sort(int* a, int beg, int end);
void merge(int* a, int beg, int mid, int end);

//global declarations
int a[] = {5,67, 54, 32, 44, 22, 2, 1};

int main()
{
    int i;
    int beg, end;
    beg = 0;
    end = 7;
    
    //printing the initial unsorted array
    printf("Inital Array: \n");
    for(i = 0; i <= end; i++)
        printf("%i ", a[i]);
    printf("\n\n");
     
    //calling the merge function
    merge_sort(a, beg, end);
    
    //printing the final sorted array
    printf("\nSorted array : \n");
    for(i = 0; i <= end; i++)
        printf("%i ", a[i]);
    printf("\n");
    
    return 0;
}


void merge_sort(int* a, int beg, int end)
{
    int mid;
    if (beg < end)
    {
        mid = (beg + end) / 2;
        
        merge_sort(a, beg, mid);
        merge_sort(a, mid+1, end);
        
        merge(a, beg, mid, end);
    }
}

void merge(int* a, int beg, int mid, int end)
{
    printf("Merging array : \n");
    int i, j;
    for (i = beg; i <= end; i++)
    {
        printf("%i ", a[i]);
    }
    printf("\n");
    
    int n1 = mid - beg + 1;
    int n2 = end - mid;
    
    //declaring left and right subarrays
    int l[n1];
	int r[n2];
    
    //copying elements into the arrays
    for (i = 0; i < n1; i++)
        l[i] = a[beg + i];
    for (j = 0; j < n2; j++)
        r[j] = a[mid + j + 1];

    //merging the arrays
    i = 0;
    j = 0;
    int k; 
    for (k  = beg; k <= end; k++)
    {
    
        if ((l[i] <= r[j] && i != n1) || j == n2)
        {
            a[k] = l[i++];
        }
        else
        {
            a[k] = r[j++];
        }
    }
}
