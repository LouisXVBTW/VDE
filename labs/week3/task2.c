#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<err.h>

int main(int argc, char **argv){
    volatile int modified;
    char buffer[32];

    if(argc<2){
        errx(1, "Please provide some arguments");
    }
    modified = 0;

    strcpy(buffer, argv[1]);

    if(modified != 0x51525354){
        printf("Try again, you got 0x%08x\n", modified);
    }else{
        printf("You have correctly got the variable to the right value. Well done!\n");
    }

    return 0;
}