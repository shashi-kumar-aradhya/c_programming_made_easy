/*  Bubble sort
    Worst case : n^2 comparisons, n^2 swaps
    best case  : n comparisons, 1 swap
    average case : n^2 comparisons, n^2 swaps
*/

#include <stdio.h>

#ifndef MAX
#define MAX 10
#endif

void swap(int a[], int i, int j);

int main()
{
	int arr[MAX] = {0};
	int i = 0, j = 0;
	int comp = 0;
	int flag = 1;
	printf("Enter the array elements : ");
	for(i = 0; i < MAX; i++)
		scanf("%d", &arr[i]);

	printf("\nUnsorted array : ");
	for(i = 0; i < MAX; i++)
		printf("%d\t", arr[i]);

	for(i = 0; i < MAX && flag; i++) {
		flag = 0;
	   for(j = 0; j < MAX-i-1; j++) {
		comp++;
	      if( arr[j] > arr[j+1]) {
		flag = 1;
		swap(arr, j, j+1);
	      }
	   }
	}

	printf("comparision = %d\n", comp);
	printf("\nSorted array : ");
	for(i = 0; i < MAX; i++)
		printf("%d\t", arr[i]);

	printf("\n\n");
}
void swap(int a[], int i, int j) 
{
	int temp = a[i];	
	a[i] = a[j];
	a[j] = temp;
}
