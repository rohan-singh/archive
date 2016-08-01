#include<stdio.h>
#include<string.h>

void reverse(int arr[], int start, int end);

int main()
{
	int arr[]= {7, 8, 9, 4, 5, 1, 2, 3, 6, 0};
	int i;
	for (i = 0; i < 10; i++)
		printf("%i ", arr[i]);
	printf("\n");
	reverse(arr, 0, 9);
	for (i = 0; i < 10; i++)
		printf("%i ", arr[i]);
	printf("\n");	
	return 0;
}

void reverse(int arr[], int begin, int end)
{
	int temp;
	while (begin < end)
	{
		temp = arr[begin];
		arr[begin] = arr[end];
		arr[end] = temp;
		begin++;
		end--;
	}

}
