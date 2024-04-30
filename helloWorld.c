#include <stdio.h>

int i;
 
int main( void )
{
    // write the sentence for 5 times
    for (i=0;i<=5;i++)
    {
        printf("Hello, World! Today is Friday\n");
    }
    
    int num=10;
    char character='X';
    printf("The number is : %d and the char is: %c\n", num, character);

    char greetings[] = "Hello World!\n";
    greetings[0] = 'J';
    printf("%s", greetings);
    // Outputs Jello World! instead of Hello World!

    char carName[] = "Volvo";
    int length = sizeof(carName) / sizeof(carName[0]);
    int i;

    for (i = 0; i < length; ++i) {
    printf("%c\n", carName[i]);
    }

    return 0;
}
