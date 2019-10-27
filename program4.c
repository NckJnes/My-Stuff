//program4.c - Nicholas Jones
#include <stdio.h>

int main (void) {
   int n;
   scanf ("%d", &n);
   if (n < 0) {
      printf ("Error: at least one data value must be provided.");
      return 1;
   }
   if (n > 0);
   int x;
   int counter;
   counter = 0;
   int pos;
   pos = 0;
   int product;
   product = 1;
   while (counter < n) {
      scanf ("%d", &x);
      if (x > 0) {
      pos = pos + 1;
      product = product * x;
      printf ("%d\n", product);
   }
      counter = counter + 1;
   }
   if (pos == 0) {
      printf ("no positive numbers");
  }
      return 0;
}
