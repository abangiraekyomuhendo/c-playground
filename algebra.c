#include <stdio.h>

int main() {

    /*
    if you have % and +/* in the same problem, the modulus carries precendence
    predict the answer: a = 8 + 11 % 5	then write code to give the result
    result = 9 */

    int a;
    a = 8 + 11 % 5;
    printf("%d \n", a); //correct
    

    /* c = 11 % 3 * 4
    result: 8
    */

   int c;
   c = 11 % 3 * 4;
   printf("%d", c); //correct

   return 0;

    	
}