#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int ran = 0;
	float num = 0;
	if (argc == 1)
		i  = 1;
	else
		i = atoi(argv[1]);
	while(i > 0)
	{
		ran = random();
		num = (float)ran;
		printf("integer = %d, float = %f\n", ran, num);
		i--;
	}
	return 0;
}
