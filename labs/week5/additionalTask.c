#include<err.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>


int changeme;

void format(char *str){
    printf(str);
}

int main(int argc, char** argv){
    char buf[4096];
    if (argc > 1){
        memset(buf, 0, sizeof(buf));
        strncpy(buf, argv[1], sizeof(buf));
        format(buf);
    }

    if (changeme == 0x51525354){
        puts("Well done, the 'changeme' variable has been changed correctly!\n");

    } else{
        printf("Better luck next time, you got 0x%08x, 0x51525354 is needed.\n", changeme);

    }
    
    exit(0);
}