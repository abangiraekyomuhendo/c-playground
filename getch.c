/*
The getch statement works the same as the getchar statement, except that the user does not have to press ENTER after the character is typed.  The character is also not echoed (displayed) as the user types it.

*/

#include <stdio.h>

int main() {
    char input;

    printf("What symbol did you get for the exam?: ");
    input = _getch();

    printf("\nYou received a %c symbol\n", input); //too tired to troubleshoot this
}
