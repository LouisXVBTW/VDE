#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>

struct internet {
  int priority;
  char *name;
};

void vde_msg()
{
  char i;
  for (i=0;i<128;i++){
      printf("Is VDE interesting?\n");
      sleep(1);
  }
}

int main(int argc, char **argv)
{
  struct internet *i1, *i2;

  i1 = malloc(sizeof(struct internet));
  i1->priority = 1;
  i1->name = malloc(16);

  i2 = malloc(sizeof(struct internet));
  i2->priority = 2;
  i2->name = malloc(8);

  strcpy(i1->name, argv[1]);
  strcpy(i2->name, argv[2]);
  printf("print the message within the vde_msg function\n");
}
