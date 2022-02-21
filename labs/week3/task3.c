
#include<stdio.h>
#include<string.h>
#include<err.h>
#include<unistd.h>

void vde_msg(){
    char i;
    for (i=0; i<128; i++){
        printf("VDE is coooooooool!\n");
        sleep(5);
    }
}

void getMessage(){
    char buffer[32];
    printf("Enter message: ");
    gets(buffer);
    printf("You entered %s\n", buffer);
}

int main(int argc, char **argv){
    printf("In main.\n");
    printf("Calling getMessage.\n");
    getMessage();

    printf("Back in main.\n");
    return 0;
    
}