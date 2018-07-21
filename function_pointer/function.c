#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#define MAX 60

typedef void (*timer_func)(void *);

void float_fun(void *data);
void int_fun(void *data);
void char_fun(void *data);

timer_func func[] = {int_fun, char_fun, float_fun};

void float_fun_1(void *data, void *data_1, void *data_2)
{
	printf("adress data(pass) = %p\n", data);
	printf("adress data_1(float) = %p\n", data_1);
	printf("adress data_2(ran) = %p\n", data_2);
	printf("adress data(pass) and value = %p, %d\n", data, *(int *)data);
	printf("Received float random data pass = %f\n", *(float *)data);
	printf("Received float random data_1 float_num = %f\n", *(float *)data_1);
	printf("Received float random data_1 integer = %f\n", *(float *)data_2);
}
void int_fun(void *data)
{
	printf("Received inter random = %d\n", *(int *)data);
}

void float_fun(void *data)
{
	printf("Received float random = %f\n", *(float *)data);
}
void char_fun(void *data)
{
	printf("Received string random = %s\n", (char *)data);
	free(data);
}



int main()
{
	int ran;
	float float_num;
	int index = 0;
#if 0
	int i
#endif
		void *pass;
	char *array = NULL;
	int counter = 0;
	while(counter < 100) {
		ran = 0;
		ran = random();
//		ran = 5;
		index =  ran % 3;
		switch(index) {
			case 0:	
				pass = (void *)&ran;
				printf("Generated random number in nteger switch = %d\n", ran);
				break;
			case 1 : 
				array = (char *)malloc(MAX);
				memset(array, '\0', MAX);
				printf("Generated random number in character switch = %d\n", ran);
				sprintf(array, "%d", ran);
				pass = (void *) array;
				break;
			default :	
				float_num =  1.0 * ran;
				//check 
#if 0
				pass = (void *)&ran;
				printf("pass address = %p, data(int) = %d, data(float) = %f, ran address = %p\n", pass, *(int *)pass, *(float *)pass, &ran);
				float_fun_1((void *)pass, (void *)&float_num, (void *)&ran);
#endif
				pass = (void *)&float_num;
				printf("Generated random number float in switch = %d, float = %fpass = %f\n", ran, float_num, *(float *)pass);
#if 0
				printf("Generated random number float in switch = %f\n", float_num);
				printf(" ****************Check****************\n");
				array = (char *)malloc(MAX);
				memset(array, '\0', MAX);
				printf("Generated random number in character switch = %d\n", ran);
				sprintf(array, "%f", (float)ran);
				printf("Float in string = %s\n", array);
				free(array);
				for(i = 0; i < sizeof(float); i++)
					printf("Float memory = %c, %d", *(char *)&ran, *(char *)&ran - '0');
#endif
				sleep(5);
				break;
		}
		func[index](pass);
		counter++;
		printf("\n\n");
	}
	printf("Function pointer is completed\n");
	return 0;
}

