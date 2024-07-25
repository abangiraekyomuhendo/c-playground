//don't forget to add sierpinski precious
/*
A function is a small section of code that is executed when we call it. 
Benefits: 
1. if you think you are going to use some code more than once, use a functions and just call the function whenever you need them
*/


/*
So, let's say you wanto sing "happy birthday" copying and pasting the same line of code because it is not good practice.
*/

#include <stdio.h>
  
//creating the function
void birthday () {
    printf("Happy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday dear Precious!\n");
    printf("Happy birthday to you!\n");

}


int main () {

    /*Technically, you could do it this way: */

    // Beginning of highlighted code

    // printf("Happy birthday to you!\n");
    // printf("Happy birthday to you!\n");
    // printf("Happy birthday dear Precious!\n");
    // printf("Happy birthday to you!");

    //End of highlighted code

    /*But, let's utilize functions now: 
    To evoke the function created about the main, type the name of the function, parentheses. This will execute the code within the function once. To execute it more than once, call the function the number of times you want (3 verses in this case.)*/

    birthday();
    birthday();
    birthday();
    return 0;
}