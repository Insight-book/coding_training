// need gcc, tested on macosx
// gcc jinto.c;./a.out
// note : buffer overflow
#include <stdio.h>
#include <string.h>

int main()
{
  char name[256];
  char greeting[256];
  char *pos;

  printf("What is your name? ");
  scanf( "%s", name ); 

  strcpy(greeting, "Hello, ");
  strcat(greeting, name);
  strcat(greeting, ", nice to meet you!\n");

  puts(greeting);

  return 0;
}
