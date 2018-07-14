#include <stdio.h>
#ifndef MAX
#define MAX 10
#endif
int main()
{

	int arr[MAX] = {0};
	int index = -1;
	int loop_counter = 0;
	int search_value = 0;
	int low = 0, high = 0, mid = 0;
	
	printf("Enter the array elements : ");
	for (loop_counter = 0; loop_counter < MAX; loop_counter++) {
		scanf("%d", &arr[loop_counter]);
	}
	
	printf("\n\nEnter the search element : ");
	scanf("%d", &search_value);

	//Binary search algorithm
	low = 0;
	high = MAX-1;
	while(low <= high){
		mid = (low + high) / 2;
		if (arr[mid] == search_value) {
			index = mid;
			break;
		}
		else if(arr[mid] < search_value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	if (index == -1)
		printf("Array element is not found\n");
	else 
		printf("Element is found at the position = %d\n", index);
	return 0;
}
