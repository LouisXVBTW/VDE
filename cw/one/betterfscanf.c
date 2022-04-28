#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  int x;
  FILE *f0;
  char *fileScan;
  int select = 2;
  fileScan=malloc(16); // can overflow memory 
  char * split;
  if ((f0=fopen(argv[1],"r"))==NULL) {printf("Error\n");exit(0);}
    for (x=0;x<(select+1);x++)
      fgets(fileScan, 16, f0);
      strtok(fileScan, " ");
      
    fclose(f0);
  printf("%s\n",fileScan);
}