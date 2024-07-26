#include <stdio.h>

int main() {
    // //data types being decalred and named
    // int event; 
    // char heat;
    // float time;

    // //values being assigned to these named data types 
    // event = 5;
    // heat = 'B';
    // time = 27.25;
    // printf("The winning time in heat %c\n", heat);
    // printf("of event %d was %f\n", event, time);


    //field width specifiers
    /*
    Explanation: 
    - Field width specifiers are used to print values and strings in fixed field widths and to round float and values off. */

    // int age = 33;

    // printf("Age is %d.\n", age);
    // printf("Age is %2d.\n", age);
    // printf("Age is %3d.\n", age);
    // printf("Age is %4d.\n", age);
    // printf("Age is %5d.\n", age);
    // printf("Age is %6d.\n", age);

    //Rounding off floats and doubles
    /*
    We add a "." followed by a value to indicate the number decimal point to print.
    */

   float roundOff = 5.867472;

   printf("Round off to one decimal point: %.1f\n", roundOff);
   printf("Round off to two decimal points: %.2f\n", roundOff);
   printf("Round off to three decimal points: %.3f\n", roundOff);

    return 0;
}
