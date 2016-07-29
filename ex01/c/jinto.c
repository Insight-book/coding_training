// need gcc, tested on macosx
// gcc jinto.c;./a.out
#include <stdio.h>

int main()
{
  char name[256];
  printf("What is your name? ");
  gets (name);
  printf ("Hello, %s, nice to meet you!\n", name);
  return 0;
}
