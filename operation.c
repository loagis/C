#include<stdio.h>

void add(float x,float y){
  printf ("%g + %g = %g\n", x, y, x+y);
}

void sub(float x, float y){
  printf("%g - %g = %g\n", x, y, x-y);
}

void multi(float x, float y){
  printf("%g * %g = %g\n", x, y, x*y);
}

void div(float x, float y){
  printf("%g / %g = %g\n", x,y, x/y);
}
