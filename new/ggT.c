#include <stdio.h>

int ggt(int a, int b){
    int min;
    int ggt;

    if(a<b){
        min = a;
    }else{
        min = b;
    }

    for(int i=1; i<min; i++){
        if(a%i==0 && b%i==0){
            ggt=i;
        }
    }
    return ggt;
}

int main(){
    printf("%d",ggt(12,16));
    return 0;
}