#include <stdio.h>
#define MAXCNT 0xffff

/* https://en.wikipedia.org/wiki/Digit_sum */


/*
** If you use the alternative faculty-based approach to
** solve this excercise you'll need a data type that is wide
** enough to hold huge numbers. Depending on the platform
** you are on, something like unsigned long, unsigned long long
** or one of the types from inttypes.h  might do the trick. Just
** for the sake of learning we typedef the type here to make it
** easier to change the type and check things out.
*/
typedef unsigned long long t_hugenumber;


/*
** Non-recursive (and naive) implementation
** of faculty. Keep in mind that your results
** might be huge, therefore you need a data type
** that can hold such huge numbers: unsigned long 
** or on different platforms maybe unsigned long long
** would do the trick. The int type is definitively
** too small.
*/
t_hugenumber
fac(unsigned int n) {
    t_hugenumber fac = 1;
    unsigned int i;

    if (n < 2) return 1;

    for (i = 2; i <= n; i++)
        fac = fac * i;

    return fac;

} /* fac */



/*
** Using nested loops, bit shifting and
** bit masking to extract single bits from
** the numbers' bit streams.
*/
void
quersumme(unsigned short result[17]) {
    unsigned int cnt = 0;
    unsigned int q;
    unsigned int z;
    unsigned int i;

    do {

        z = cnt;
        q = 0;

        for(i=0; i<16; i++) {
            q += (z & (1u<<i))?1:0;
        }

        ++result[q];
        cnt++;

    } while (cnt <= MAXCNT);

} /* quersumme */


/*
** For those of you, who are more mathematically 
** inclined, this is a second variant of the function. 
** In how many ways can you choose k things from a set
** of n things?
** Solution: ${{n}\choose{k}} = \frac{n!}{k!*(n-k)!}$
**
** Be aware that n! may result in huge numbers, a
** four byte int type might be too small to hold such
** a number. 
*/
void
quersumme2(unsigned short result[17]) {
    t_hugenumber fac16 = fac(16);
    t_hugenumber q;
    unsigned int i;

    for(i=0; i<17; i++) {
        q = fac16 / (fac(i) * fac(16-i));
        result[i] = q;
    }

} /* quersumme2 */

int 
main(int argc,
     char **argv) {

    unsigned short result[17] = {0};
    int i;

    quersumme(result);
    //quersumme2(result);

    for (i=0; i<17; i++) {
        printf("Quersumme %d :%d\n", i, result[i]);
    }

    return 0;

} /* main */
