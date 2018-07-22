#include <stdio.h>
#include <stdlib.h>

int global;
int global_1 = 0;

int main()
{
	int a = 10;
	int *ptr = malloc(4);
	printf("Global = %p global_1 = %p a = %p ptr = %p\n", &global, &global_1, &a, ptr);
	return 0;
}
