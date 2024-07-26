//scanf practice

#include <stdio.h>

int main() {

    //shorter scanf methods
    int event;
    char heat;
    float time;

    printf("Enter the event number, heat letter, and time: ");
    scanf("%d %c %f", &event, &heat, &time);

    printf("The winning time in heat %c of event %d was %.2f\n", heat, event, time);
    // printf("of event %d was %f\n", event, time);

    return 0;
}