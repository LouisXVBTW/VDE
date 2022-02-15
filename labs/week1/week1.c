#include<stdio.h>
#include<stdlib.h>

void datatypes(){
 //different data types
    /*
    int
    char
    float
    for a string u need a char array (hence why buffer overflows are a thing)
    */
    int x, y, z;
    x=-6;
    y=10;
    z=19090;

    int intArray[4];
    intArray[0]=3;
    intArray[1]=5;
    intArray[2]=7;
    intArray[3]=1;

    printf("The secound element of the array is %d\n", intArray[1]);
    
}

void strings(){
    char string[5];
   string[0]='T';
   string[1]='e';
   string[2]='s';
   string[3]='t';
   string[4]='\0';
   printf("The elements in the string are %s\n", string);
       /*
Arrays are one way of dealing with strings. In C a string is an array of characters. It is even more
important to note that a string is always terminated with a null character (\0). This can be
explicitly written as in the example below.
    */
}

void pointers(){
     //pointers
   int *xx, yy;
   yy=9;
   xx=&yy;

   printf("xx = %d and yy = %d\n", *xx, yy);
   yy = 10;
   printf("xx = %d and yy = %d\n", *xx, yy);
}

void memoryallocation(char **argv){
    //MEMORY asllocation and freeing
   int *input;
   input = malloc(sizeof(int)*atoi(argv[1]));
   input[0]=5;
   input[1]=10;
   input[2]=15;

   free(input);
}

void conditionalStatements(){
    //conditional if
    int a;
    a=6;

    if (a==6){
        printf("The value is 6\n");
    }
    else{
        printf("Something went wrong!\n");
    }
    //for loop
    int b;
    for(b=0;b<5;b++){
        printf("b is %d\n", b);
    }
    //while loop
    int c=0;
    while(c<5){
        printf("c is %d\n", c);
        c++;
    }
}

int square(int x){
    //returning from a function
    return x*x;
}
void functions(){
    //using functions
    int x, square_x;
    x=5;
    square_x=square(x);
    printf("The square of %d is %d\n", x, square_x);
}

void primeNumbers(char **argv){
    int num;
    int prime = 1;
    
    for(num=2;num<atoi(argv[1]);num++){
        if ((atoi(argv[1])%num)==0){
            prime = 0;
            break;
        }
    }
    if (prime==1){
        printf("%d is prime\n", atoi(argv[1]));
    }
    else{
        printf("%d is not prime\n", atoi(argv[1]));
    }
    
    
}

int main(int argc, char **argv){
    printf("Hello World\n");
    //datatypes();
    //strings();
    //pointers();
    //memoryallocation(argv);
    //conditionalStatements();
    //functions();
    primeNumbers(argv);
}