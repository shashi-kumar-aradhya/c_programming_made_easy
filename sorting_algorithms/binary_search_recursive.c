#include <stdio.h>


//Macro's
#ifndef MAX
#define MAX 10
#endif


//global functions
int binary_search(int arr[], int low, int high, int search_value);

int main()
{

	int arr[MAX] = {0};
	int index = -1;
	int loop_counter = 0;
	int search_value = 0;


	printf("Enter the array elements : ");
	for (loop_counter = 0; loop_counter < MAX; loop_counter++) {
		scanf("%d", &arr[loop_counter]);
	}

	printf("\n\nEnter the search element : ");
	scanf("%d", &search_value);

	index = binary_search(arr,0, MAX-1, search_value);
	if (index == -1)
		printf("Array element is not found\n");
	else 
		printf("Element is found at the position = %d\n", index);
	return 0;
}
//Binary search algorithm
int binary_search(int arr[], int low, int high, int search_value)
{
	int mid;
	if(low > high)
		return -1;

	mid = (low + high) / 2;
	if (arr[mid] == search_value) 
		return mid;
	else if(arr[mid] < search_value)
		low = mid + 1;
	else
		high = mid - 1;
	return binary_search(arr, low, high, search_value);
}
