//Nicholas Jones - program2.c
#include <stdio.h>

int main (void) {
    int x;
    scanf ("%d", &x);
    int y;
    scanf ("%d", &y);
    int z;
    scanf ("%d", &z);
    printf ("%d\n", (x + y + z));
    if (y != 0) printf ("%d\n", x/y);
    else printf ("zero\n");
    if (z != 0) printf ("%d\n", x/z);
    else printf ("zero\n");
    return 0;
}