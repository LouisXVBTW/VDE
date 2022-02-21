#include<stdio.h>

void fun2(int a, int b){
    printf("This is in fun2\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
}

void fun1(){
    int n=3;
    int m=4;
    fun2(n,m);
    printf("This is in fun1\n");
}

int main(){
    int a=1,b=2;
    fun1();
    printf("this is the end of the demo\n");
    return 0;
}