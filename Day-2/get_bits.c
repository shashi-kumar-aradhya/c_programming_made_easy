#include <stdio.h>

/**
 *  Aim : Right adjusted n-bit field of x that begins at position p 
 *  GETBITS(x, 4, 3) returns the three bits in position 4, 3, 2, right adjusted
 */
#define GETBITS(x, p, n) (((unsigned int)x >> (p-n+1)) & ~(~0 << n))



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

	int x = atoi(argv[1]);
	int p = atoi(argv[2]);
	int n = atoi(argv[2]);

	printf("\n*************get bits operation**********\n");
	printf("x = %d\t p = %d\t n = %d\n",x, p, n); 
	printf("binary representation = ");
	printbits(x);
	printf("\nAfter the operation binary representation = ");
	printbits(GETBITS(x, p, n));
	
	printf("\n\n");

	return 0;

}
