#include<stdio.h>

int main(){
    char i=0;
    int a;
    char b[150];
    for(a=0;a<150;a++){
        b[a]='a';
    }
    b[149]='\0';
    while(i<150){
        printf("i is %hhd\n",i);
        printf("%c\n",b[i]);
        i++;
    }
}