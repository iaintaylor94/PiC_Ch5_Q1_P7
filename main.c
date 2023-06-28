/* Program to find the greatest common dividor of two non-negative integers */

#include <stdio.h>

int main(void) {

  int u, v, temp;
  printf ("Please enter two non-negative integers.\n");
  scanf ("%i%i",&u ,&v);

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }

  printf ("Their greatest common divisor is %i\n", u);
  
  return 0;
}