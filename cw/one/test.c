#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char input[16];


int main(int argc, char **argv){
	printf(input);
	printf(argv);
	printf("\n");
	strcpy(input, argv);
	printf("%s",input);
	return 0;
}
