#include <stdio.h>

/* Comment */
int main(int argc, char *argv[]) {
  int distance = 100;

  printf("You are %d miles away.\n", distance);
  printf("Which is twice as far as %d\n", distance/2);
  printf("..and half as far as %d\n", distance*2);

  return 0;
}
