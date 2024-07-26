#include <stdio.h>

int main(){
    char input;

    printf("What symbol did you get for the exam?: ");
    input = getchar();

    printf("\nYou received a %c symbol\n", input);
}
