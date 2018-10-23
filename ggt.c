#include <stdio.h>


int min(int a,int b){

}

int ggt(int a, int b){
  int i;
  int ggt;
  int min;

  if(a<b){
    min = a;
  }else{
    min = b;
  }

  for(i=1; i<min; i++){
    if(a%i==0 && b%i==0){
      ggt = i;
    }
  }

  return ggt;
}

int main(){
  int a = 34;
  int b = 85;

  printf("%d",ggt(a,b));
}
