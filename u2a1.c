#include<stdio.h>


struct bruch{
	int zaehler;
	int nenner;
	};
	typedef struct bruch Rational;
int ggt(int x, int y){
	int c;
	if (x<0) x= -x;
	if (y<0) y= -y;
	while (y!=0){
		c = x%y; x=y;y=c;
	}
		return x;
	}

Rational kuerzen(Rational a){
	int g=ggt(a.zaehler,a.nenner);
	a.zaehler/=g;
	a.nenner/=g;
	return a;
}

Rational add(Rational a, Rational b){
	Rational c;
	if (a.nenner == b.nenner){
	c.zaehler = a.zaehler + b.zaehler;
	c.nenner = a.nenner;
	}else{
	c.nenner = a.nenner*b.nenner;
	c.zaehler = a.zaehler*b.nenner + b.zaehler*a.nenner;
	}
	return kuerzen(c);
}

Rational substract(Rational a, Rational b){
	Rational c;
	if (a.nenner == b.nenner){
	c.zaehler = a.zaehler + b.zaehler;
	c.nenner = a.nenner;
	}else{			//TODO Gelichnennung Methode erstellen
	c.nenner = a.nenner*b.nenner;
	c.zaehler = a.zaehler*b.nenner + b.zaehler*a.nenner;
	}
	return kuerzen(c);
}

Rational multiply(Rational a, Rational b){
	Rational c;
	c.zaehler = a.zaehler * b.zaehler;
	c.nenner = a.nenner * b.nenner;
	return kuerzen(c);
}

Rational devide(Rational a, Rational b){
	Rational c;
	c.zaehler = a.zaehler*b.nenner;
	c.nenner = a.nenner* b.zaehler;
	return kuerzen(c);
}

int main() {
	Rational a={12,18};
	Rational b={6,24};
	Rational c = add(a,b);
	//a=kuerzen(a);
	printf("%d / %d ",c.zaehler, c.nenner);
	return 0;
}
