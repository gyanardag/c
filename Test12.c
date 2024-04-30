#include <stdio.h>;

enum Level {
  LOW = 1,
  MEDIUM = 3,
  HIGH = 5
};

int main(){

    enum Level myVar = MEDIUM;

    switch (myVar){
        case LOW:
            printf("LOW level\n");
            break;
        case MEDIUM:
            printf("MEDIUM level\n");
            break;
        case HIGH:
            printf("HIGH level\n");
            break;
    }

    switch (myVar){
        case 1:
            printf("LOW level\n");
            break;
        case 3:
            printf("MEDIUM level\n");
            break;
        case 5:
            printf("HIGH level\n");
            break;
    }

    return 0;
}