#import <stdio.h>

int summe(int zahl1, int zahl2){
    return zahl1+zahl2;
}
int differenz(int zahl1, int zahl2){
    return zahl1-zahl2;
}
int produkt(int zahl1, int zahl2){
    return zahl1*zahl2;
}
float quotient(int zahl1, int zahl2){
     float ergebnis = (float)zahl1/zahl2;
     return ergebnis;
}
int runde(float zahl){
    return (int)(zahl+0.5);
}


int main(){

    printf("%d\n",summe(1,4));
    printf("%d\n",differenz(1,4));
    printf("%f\n",quotient(7,4));
    printf("%d\n",runde(quotient(7,2)));
    return 0;
}