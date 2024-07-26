//Fahrneheit to celsius convertor. Formula is (Fahrenheit - 32) * 5/9

#include <stdio.h>

int main () {
    //we can use float or double. I will use float

    float fahr, celsius; 

    printf("Input fahrenheit temperature: ");
    scanf("%f", &fahr);

    celsius = (fahr - 32) * 5/9;

    printf("The Fahr temperature (%.2f) converted to Celsius is: %.2f", fahr, celsius); 

}