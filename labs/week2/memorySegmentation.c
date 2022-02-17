#include<stdio.h>

int global_var;
int global_initialized_var=5;


void function(){
    int stack_var;
    printf("The memory location of function stack_var is @ 0x%x\n", &stack_var);
}

int main(){
    int stack_var;
    static int static_initilized_var=5;
    static int static_var;
    int *heap_var_ptr;

    heap_var_ptr = (int *)malloc(4);
    //in the date segment
    printf("global_initialized_var is at address 0c%x\n", &global_initialized_var);
    printf("static_initialized_var is at address 0c%x\n", &static_initilized_var);
    //in the bss segment
    printf("global_var is at address 0x%x\n", &global_var);
    printf("static_var is at address 0x%x\n", &stack_var);
    //in the heap segment
    printf("heap variable is at address 0x%08x\n", heap_var_ptr);
    printf("static variable is at address 0x%08x\n", &stack_var);

    function();
}