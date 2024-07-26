//Just a list of practice questions to help me master functions in C

#include <stdio.h>

/* 
Exercise 1: Hello World Function
Create a function that prints "Hello, World!" to the console. Call this function from your main function. */

void helloWorld() {
    printf("Hello World!");
}

/*Exercise 2: Add, Divide, Multiply, and find the Modulus of Two Numbers
Write a function that takes two integers as input and returns their sum. In your main function, call this function with two numbers and print the result.*/

int add(int a, int b) {
    return a + b;
}

int multiply(int c, int d) {
    return c * d;
}

int division(int e, int f) {
    return e / f;
}

int modulus(int g, int h) {
    return g % h;
}



/*Exercise 3: Find the Maximum of Two Numbers
Write a function that takes two integers and returns the larger of the two. Use this function in your main function to find and print the maximum of two given numbers. */

int maximum(int i, int j){ //here we are going to use the if-else statament. 
    if (i > j) {
        return i;
    } else {
        return j;
    }
}


/*Exercise 4: Check Even or Odd
Create a function that takes an integer as input and prints whether it is even or odd. Call this function from your main function with a test number.

Exercise 5: Calculate Factorial
Write a function that calculates the factorial of a non-negative integer. Use this function in your main function to find and print the factorial of a given number.

Exercise 6: Reverse a String
Create a function that takes a string and prints it in reverse order. In your main function, call this function with a test string.

Exercise 7: Count Vowels
Write a function that takes a string and returns the number of vowels in it. Use this function in your main function to count and print the number of vowels in a given string.

These exercises will help you practice defining and using functions, passing arguments, and handling different data types.*/

//Declaration and Definition of functions

int main() {
    //Excercise one:
    // helloWorld();

    //Excercise two:
    // int result;
    // result = add(3,4);
    // printf("The sum and of integers a and b is %d", result);

    //hmm, what if we tried to input user data
    /*
    int a, b, result;
    printf("Input value a: ");
    scanf("%d", &a);

    printf("Input value b: ");
    scanf("%d", &b);

    result = add(a, b);
    printf("The sum and of integers a and b is %d", result);
    */

    // ******** Multiplication ********

    /*
    int product;
    product = multiply(4, 4);
    printf("The product of 4 and 4 is: %d", product);
    */

   //Add user input
    /*
    int c, d, mult_result;
    
    printf("Value one: ");
    scanf("%d", &c);
    printf("Value two: ");
    scanf("%d", &d);
    
    
    mult_result = multiply(c, d);
    printf("Product: %d", mult_result);
    */ //It worked!


    // ******** Division ********
    // int e, f, quotient;
    // quotient = division(8,4);
    // printf("Quotient is: %d", quotient);

    //Add user input
   /* printf("Value one: ");
    scanf("%d", &e);

    printf("Value one: ");
    scanf("%d", &f);

    quotient = division(e, f);
    printf("Quotient is: %d", quotient);*/ //it works too!


    // ******** Modulus ********
    // int g, h, mod_result;
    // mod_result = modulus(7, 6);
    // printf("Modulus of 7 and 6 is: %d", mod_result);

    //Add user input

    /* 
    printf("Value a: ");
    scanf("%d", &g);

    printf("Value b: ");
    scanf("%d", &h);

    mod_result = modulus(g, h);
    printf("Modulus is: %d", mod_result);*/ //it works


    
    //Excercise Three
    int i, j, max;
    // max = maximum (4,6);
    // printf("Between 4 and 6, the bigger number is: %d", max);

    //Let's add user input:
    /*
    printf("Enter value one: ");
    scanf("%d", &i);
    printf("Enter value two: ");
    scanf("%d", &j);

    max = maximum(i,j);
    printf("The larger number between the two is: %d", max);*/ //It works!
    
    

    return 0;


    
}