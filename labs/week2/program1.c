#include<stdio.h>

int main(){
    unsigned char n=250;
    int i;

    for(i=0;i<10;i++) {
        printf("%hhu | %hhx \n", n, n-10);
        n++;

    }
    printf("n is %hhu and n-10 equals %hhu\n", n,n-10);
}