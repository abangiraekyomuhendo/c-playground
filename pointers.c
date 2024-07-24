//Ah, the dreaded pointers!
//These notes are based off of Youtube Lectures/Examples and notes from my C programming course unit.
/*
Pointers allow us to work directly with computer memory.
In C, whenever you declare a variable, a space will be allocated in the memory for the variable. C allows us to access the address of the variable.  
Use the ampersand and the variable name to access the memory address.
The format specifier for pointers is %p.
Pinter variables store the ADDRESS not the VALUE of the variable.
*/

#include <stdio.h>

int main () {

    //Address example
    // int age = 25;

    // printf("%p", &age); //this is going to print the memory address where 25 is allocated.

    //How to create pointers

    int age = 25;
    int* ptr = &age; //storing the value of age in the address ptr

     printf("Address: %p\n", ptr);

     printf("Value: %d", *ptr);
    //How to assign value to a pointer variable
    int 
    int * pointera = 


    return 0;
}