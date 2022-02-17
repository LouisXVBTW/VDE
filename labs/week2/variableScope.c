#include<stdio.h>

int j=1000;

void fun3(){
    int i=7;
    int j=10;
    printf("\t\t\t[in fun3] i @ 0x%08x =%d\n", &i, i);
    printf("\t\t\t[in fun3] i @ 0x%08x =%d\n", &j, j);
}

void fun2(){
    int i=5;

    printf("\t\t\t[in fun2] i @ 0x%08x =%d\n", &i, i);
    printf("\t\t\t[in fun2] i @ 0x%08x =%d\n", &j, j);
    j=1337;
    printf("set j = 1337");
    fun3();
    printf("\t\t\t[back in fun2] i @ 0x%08x =%d\n", &i, i);
    printf("\t\t\t[back in fun2] i @ 0x%08x =%d\n", &j, j);
}

fun1(){
    int i=3;

    printf("\t\t\t[in fun1] i @ 0x%08x =%d\n", &i, i);
    printf("\t\t\t[in fun1] i @ 0x%08x =%d\n", &j, j);
    fun2();
    printf("\t\t\t[back in fun1] i @ 0x%08x =%d\n", &i, i);
    printf("\t\t\t[back in fun1] i @ 0x%08x =%d\n", &j, j);
}

int main(){
    int i=1;
    printf("\t\t\t[in main] i @ 0x%08x =%d\n", &i, i);
    printf("\t\t\t[in main] i @ 0x%08x =%d\n", &j, j);
    fun1();
    printf("\t\t\t[back in main] i @ 0x%08x =%d\n", &i, i);
    printf("\t\t\t[back in main] i @ 0x%08x =%d\n", &j, j);
}