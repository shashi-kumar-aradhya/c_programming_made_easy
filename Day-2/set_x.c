#include <stdio.h>

#define SET_X(value, pos, x) (value = ((value & ~(1 << pos)) | ( x << pos)))



void printbits(unsigned int value)
{
        int i = sizeof(int) * 8 - 1;
        for (; i >= 0; i--) {
                if ( value & (1 << i))
                        printf("1");
                else
                        printf("0");
        }
        printf("  ");
        return;
}

int main(int argc, char * argv[])
{

	int a = 10;
	int set = atoi(argv[1]);
	int value = atoi(argv[2]);

	printf("\n\n*************set operation**********\n");
	printf("a = %d\t binary representation = ", a);
	printbits(a);
	printf("set position = %d\t value = %d\n",set, value); 
	printf("a = %d\t binary representation = ", a);
	printbits(SET_X(a, set, value));
	
	printf("\n\n");

	return 0;

}
