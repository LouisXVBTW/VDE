#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=10;
    int *ip;
    ip = &a;
    printf("Address of variable a: %x\n", &a);
    printf("Address stored in the pointer variable: %x\n", ip);
    printf("Value of *ip variable: %d\n", *ip);
    printf("Address of pointer variable: %x\n", &ip);

}