#include <stdio.h>
int main(void){
    int a1, a2;
    int *p1 , *p2;

    p1 = &a1;
    p2 = &a2;
    
    printf("%d\n", *(p1+p2));
    }