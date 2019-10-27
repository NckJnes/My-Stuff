//Nicholas Jones - Program3.c
#include <stdio.h>

int main (void) {
  int n;
  scanf ("%d", &n);
  int counter;
  counter = -n;
  while (counter <= n) {
     printf ("%d\n", counter);
     counter = counter + 1;
  }
  return 0;
}