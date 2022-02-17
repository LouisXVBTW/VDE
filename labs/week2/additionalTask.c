#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char **argv){
    volatile int modified;
    char buffer[32];
    modified=0;
    strcpy(buffer, argv[1]);

    if (modified!=0){
        printf("The 'modified' variable is changed. Well done!\n");

    }else{
        printf("Try again?\n");
    }
    return 0;
}