#include<err.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int changeme;

void format(char *str){
    printf(str);
}

int main(int argc, char** argv){
    char buf[512];
    if (argc > 1){
        memset(buf, 0, sizeof(buf));
        strncpy(buf, argv[1], sizeof(buf));
        format(buf);
    }

    if (changeme != 0){
        puts("Well done, the 'changeme' variable has been changed correctly!");

    } else{
        puts("Better luck next time");

    }

    printf("%d\n", changeme);
    exit(0);
}