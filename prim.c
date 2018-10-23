#include <stdio.h>

int primFinder(int n){
  //int teiler;
  int i;
  for(i=2;i<n;++i){
    if(n%i==0){

    }else{
      printf("%d\n",i);
    }
  }
}

//int primTwin(){

//}

int main(){
  int n = 20;
  primFinder(n);
  return 0;
}
