#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    int* ptr;
    int n, i;
 
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    ptr =(int*)malloc(n * sizeof(int));
    //ptr = (int*)calloc(n, sizeof(int));
     
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        printf("Memory successfully allocated using malloc.\n");
 
         for (i = 0; i < n; i++) {
            ptr[i] = i + 1;
        }
 
         printf("The elements of the array are: ");
        for (i = 0; i < (n-1); i++) {
            printf("%d, ", ptr[i]);
        }
            printf("%d\n", ptr[i]);
    }
    printf("The address of ptr is %p and the value of ptr is %x\n", &ptr, ptr);
    
    printf("The address of ptr[1] is %p and the value of ptr is %d\n", &ptr[1], ptr[1]);
    
    int m;
    for (m=0; m<2; m++){
    
    
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    ptr =(int*)realloc(ptr, n * sizeof(int));
     
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        printf("Memory successfully allocated using realloc.\n");
 
         for (i = 0; i < n; i++) {
            ptr[i] = i + 1;
        }
 
         printf("The elements of the array are: ");
        for (i = 0; i < (n-1); i++) {
            printf("%d, ", ptr[i]);
        }
            printf("%d\n", ptr[i]);
    }
    printf("The address of ptr is %p and the value of ptr is %x\n", &ptr, ptr);
    printf("The address of ptr[1] is %p and the value of ptr is %d\n", &ptr[1], ptr[1]);
    
    }



    free(ptr);
    printf("The address of ptr is %p and the value of ptr is %x\n", &ptr, ptr);
    ptr=NULL;
    printf("The address of ptr is %p and the value of ptr is %x\n", &ptr, ptr);
    
    return 0;
}
