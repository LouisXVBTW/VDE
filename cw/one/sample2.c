#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char input[16];
static char changeME[16];

int main(int argc, char **argv){
    strcpy(changeME, "secret\n");
    printf(changeME);
    printf("Now copying argv into input\n");
    snprintf(input, sizeof(input), "%s", argv[1]);
    printf("%s\n",input);
    printf(changeME);
}