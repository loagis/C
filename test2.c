#include<stdio.h>

void main (){
//  int a = 021;
//  int b = 0x1A;

float z = 3.14, *p = &z;
printf("%f, %p, %f,%p", z, p, *p, &p);
}
