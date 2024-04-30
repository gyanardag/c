#include <stdio.h>
#include <string.h>

int main(){

    int myNumbers[5] = {25, 50, 75, 100, 125};
    int i;

    for (i = 0; i < 5; i++) {
        printf("%p\n", &myNumbers[i]);
    }

    // Get the value of the first element in myNumbers
    printf("%d\n", *myNumbers);

    // Get the value of the second element in myNumbers
    printf("%d\n", *(myNumbers + 1));

    // Get the value of the third element in myNumbers
    printf("%d\n", *(myNumbers + 2));

    int *ptr = myNumbers;
    
    for (i = 0; i < 5; i++) {
       printf("%d\n", *(ptr + i));
    }

    // Change the value of the first element to 13
    *myNumbers = 13;

    // Change the value of the second element to 17
    *(myNumbers +1) = 17;

    // Get the value of the first element
    printf("%d\n", *myNumbers);

    // Get the value of the second element
    printf("%d\n", *(myNumbers + 1));

    return 0;

}