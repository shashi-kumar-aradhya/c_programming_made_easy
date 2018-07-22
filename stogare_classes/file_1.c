#include <stdio.h>
#include <stdlib.h>

int global = 20;
int global_1 = 0;
void fun();
int main()
{
	int a = 10;
	int *ptr = malloc(4);
	printf("global =  %d address = %p\n", global, &global);
	printf("Global = %p global_1 = %p a = %p ptr = %p\n", &global, &global_1, &a, ptr);
	fun();
	printf("global =  %d address = %p\n", global, &global);
	return 0;
}
