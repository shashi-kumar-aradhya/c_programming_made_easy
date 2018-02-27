#include <stdio.h>

#define BIT(x) (1 << x)

/**
 *  Aim : Setting p-th position 
 */
#define SET(x, p)  (x | (1 << p))

/**
 *  Aim : Clears the p-th position
 */
#define CLR(x, p)  (x & ~(1 << p))


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

int main()
{

	int a = 10;
	int set = 2;
	int b = 0xc;
	int clr = 2;

	printf("\n\n*************set operation**********\n");
	printf("a = %d\t binary representation = ", a);
	printbits(a);
	printf("set position = %d\n",set); 
	printf("a = %d\t binary representation = ", a);
	printbits(SET(a, set));

	
	printf("\n\n*************clr operation**********\n");
	printf("b = %d\t binary representation = ", b);
	printbits(b);
	printf("clr position = %d\n",clr); 
	printf("b = %d\t binary representation = ", b);
	printbits(CLR(b, clr));
	
	printf("\n\n");

	return 0;

}
