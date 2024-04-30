#include <stdio.h>
#include <string.h>

int main(){

    /*
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet));   // 26
    printf("%d\n", sizeof(alphabet));   // 27    

    char alphabet1[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet1));   // 26
    printf("%d\n", sizeof(alphabet1));   // 50

    char str1[20] = "Hello ";
    char str2[20] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s\n", str1);

    // Copy str1 to str2
    strcpy(str2, str1);

    // Print str2
    printf("%s", str2);
    */

    char str01[] = "Hello";
    char str02[] = "Hello";
    char str03[] = "Hierer";

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str01, str02));  // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str01, str03));  // Returns -4 (the strings are not equal)

    return 0;

}