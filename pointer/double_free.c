#include <stdio.h>

int main()
{

	int *ptr = malloc(sizeof(int));
	printf("ptr addr = %p %p\n", ptr, ptr);
	free(ptr);
	ptr = NULL;
	printf("ptr addr = %p %p\n", ptr, ptr);
	printf("ptr  = %s %p\n", (char *)ptr, ptr);
	free(ptr);
	return 0;
}
