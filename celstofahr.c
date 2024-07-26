//Celsius to Fahrenheit convertor. Formula is (Fahrenheit - 32) * 5/9

#include <stdio.h>

int main () {
    //we can use float or double. I will use float

    float fahr, celsius; 

    printf("Input Celsius temperature: ");
    scanf("%f", &celsius);

    fahr = (celsius * 9/5) + 32;

    printf("The Celsius temperature (%.2f) converted to Fahrenheit is: %.2f", celsius, fahr); 

}