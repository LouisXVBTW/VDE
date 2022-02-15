#include<stdio.h>

int main(){
    char i;

    for(i=0; i<128; i++){
        printf("%hhd | %hhX \n", i, i);
    }
}