//for loops repeat a block of code for a specific number of times

//general syntax is down below
/*
starts with the "for" word and is followed by three expressions inside the parentheses.

for (intializationExpression; testExpression; updateExpression) {
****code inside the loop
} 

1. intializationExpression - declares and intializes a variable e.g int i = 0
2. testExpression - boolean expression that evaluates to true or false e.g: i < 5; If the testExpression is true, the code is executed.
3. updateExpression - changes the value of an expression
*/

#include <stdio.h>

int main () {

    int sum = 0;
    for (int i = 1; i < 3; i++) {
        sum = sum + i;
    }

    printf("%d \n\n", sum);
    

    for (int i = 0; i < 6; i++) {
        printf("Yoh!\n");
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", i);
    }


    //Practical examples (Based off of YouTube)
    //find the sum of all numbers from 1 - 100
    return 0;
}