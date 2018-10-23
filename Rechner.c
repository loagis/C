# include <stdio.h>

int add(int x,int y){
  return x+y;
}

int sub(int x, int y){
  return x-y;
}

int multi(int x, int y){
  return x*y;
}

float div(int x, int y){
  float result =(float) x/y;
  return result;
}

int round(float z){
  z+= 0.5;

int result = (int)z;
return result;
}

int main(){
  int x= 4;
  int y= 3;
  float z= 7.7;
  printf("Summe: %d\n",add(x,y));
  printf("Differenz:%d\n",sub(x,y));
  printf("Produkt:%d\n",multi(x,y));
  printf("Quotient:%f\n",div(x,y));
  printf("Rundung:%d\n",round(z));
return 0;
}
