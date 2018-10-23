#include <stdio.h>

int main(){
  int a=7;
  int b=2;
  int c=3;
  printf("Maximum:%d\n",max(a,b,c));
  printf("Minimum:%d\n",min(a,b,c));
  return 0;
}
int min(int a,int b,int c){
  if(a<b && a<c){
      return a;
  }else if(b<a && b<c){
      return b;
    }else{
      return c;
    }
  }

int max(int a,int b,int c){
  if(a>b && a>c){
      return a;
  }else if(b>a && b>c){
      return b;
    }else{
      return c;
    }
  }
