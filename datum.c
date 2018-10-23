#include<stdio.h>
union date {
	int year;
	char month;
	char day; };
	int main(void) {
		union date birth;
		birth.year = 1984;
		birth.month = 7;
		birth.day = 28;
		printf("%d, %d, %d\n",birth.year, birth.month, birth.day);
		}
