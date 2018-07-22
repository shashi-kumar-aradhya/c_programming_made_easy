#include <stdio.h>
int global;
void fun()
{
	printf("I am inside function\n");
	global = 30;
	printf("global inside function =%d %p\n", global, &global);
}

