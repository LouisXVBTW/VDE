#include<err.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char** argv){
    volatile int changeme;
    char buffer[32];
    changeme = 0;
    sprintf(buffer, argv[1]);
    if (changeme!=0){
        printf("Well done");
    }
}