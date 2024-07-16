/*
Author: Abangira

Note: The goal of this is to go through fundamental concepts of the entire semester as I prepare for exams.

Content covered in this semester: 
Arrays, For Loops, While Loops, Functions, If-Else statements, Pointers, Relational Operators, Basic Structured Programming theory questions
*/

#include <stdio.h>

int main () {

//Pointers

int x, y;
int *p; //What the asterisk does is it refers to the variable that pointer variable p is pointing to. 

p = &x;
*p = 4;
x = 4;

printf("%d", x);

    return 0;
}

//Pointers
