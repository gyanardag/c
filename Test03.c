#include <stdio.h>
#include <string.h>

int main(){

    /*
    // Create an int and a string variable
    int myNum;
    char myStr[20];

    // Ask the user to type a number AND a string
    printf("Type a number AND a string and press enter: \n");

    // Get and save the number AND string the user types
    scanf("%d %s", &myNum, myStr);

    // Print the number
    printf("Your number is: %d\n", myNum);

    // Print the string
    printf("Your string is: %s\n", myStr);
    */

    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s\n", fullName);

    // Type your full name: John Doe
    // Hello John Doe

    // Create an int and a char variable
    int myNum;
    char myChar;

    // Ask the user to type a number AND a character
    printf("Type a number AND a character and press enter: \n");

    // Get and save the number AND character the user types
    scanf("%d %c", &myNum, &myChar);

    // Print the number
    printf("Your number is: %d\n", myNum);

    // Print the character
    printf("Your character is: %c\n", myChar);

    printf("%p", &myNum); // Outputs 0x7ffe5367e044


    return 0;

}