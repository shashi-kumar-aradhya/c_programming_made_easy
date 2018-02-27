#include <stdio.h>

unsigned int s_strlen(const char *str)
{
	unsigned int len = 0;
	while(str[len] != '\0') {
		len++;
	}
	return len;
}

int main(int argc, char *argv[])
{
	if(argc != 2) {
		printf("Please enter the format : ./a.out <string name>\n");
		return -1;
	}

	printf("Entered string = %s\t string count = %u\n", argv[1], s_strlen(argv[1]));
	return 0;
}
