#include <stdio.h>
#define MAX 10
int main()
{
	int arr[MAX] = {0};
	int search_value = 0, index = -1, lc = 0;
	printf("Enter the search value = ");
	scanf("%d", &search_value);
	
	printf("Enter the array elements: ");
	for (lc = 0; lc < MAX; lc++)
		scanf("%d", &arr[lc]);

	for(lc = 0; lc < MAX; lc++) {
		if (arr[lc] == search_value)
		{
			index = lc;
			break;
		}
	}
	if (index == -1)
		printf("Search value is not found\n");
	else
	
		printf("Search value is found at index = %d\n", index);
	return 0;
}
