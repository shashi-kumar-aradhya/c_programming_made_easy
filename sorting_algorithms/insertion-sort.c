/*  Insertion sort
    Worst case : n^2 comparisons, n^2 swaps
    best case  : n comparisons, 1 swap
    average case : n^2 comparisons, n^2 swaps
*/

#include <stdio.h>

#ifndef MAX
#define MAX 5
#endif

void swap(int a[], int i, int j);

int main()
{
	int arr[MAX] = {5,4,6,2,3};
	int i = 0, j = 0;
	int temp= 0;
//	printf("Enter the array elements : ");
//	for(i = 0; i < MAX; i++)
//		scanf("%d", &arr[i]);

	printf("\nUnsorted array : ");
	for(i = 0; i < MAX; i++)
		printf("%d\t", arr[i]);

	for (i = 1; i < MAX; i++) {
	    temp = arr[i];
	    j = i-1;
	    while(j >= 0 && arr[j] > temp) {
		arr[j+1] = arr[j];
		j--;
	   }
	   arr[j+1] = temp;
	}	

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
