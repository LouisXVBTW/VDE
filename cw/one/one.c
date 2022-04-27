#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char input[16]; //overflow 16 chars?
char* openFile(char *filename, int select);
int readWord(char *argv);

int main (int argc, char **argv)
{
  char *det="input1.txt";
  char *output;
  int select=1;
  if (argc>1)
  select=readWord(argv[1]);
  output=openFile(det,select);
  printf("%s\n",output); //cant format string rip
}

int readWord(char *argv)
{
  int word;
  printf("Which number word do you want selected? ");
  scanf("%d",&word);
  printf("word is %d\n",word);//cant format string rip
  strcpy(input,argv); //no check on lenght for copy into input
  //printf("%s", input);
  
  return word;
}

char* openFile(char *filename, int select)
{
  int x;
  FILE *f0;
  char *fileScan;
  fileScan=malloc(16); // can overflow memory 
  if ((f0=fopen(filename,"r"))==NULL) {printf("Error\n");exit(0);}

    for (x=0;x<(select+1);x++)
      fscanf(f0,"%s",fileScan);
    fclose(f0);
  return fileScan;
}