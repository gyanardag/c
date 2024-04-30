#include <stdlib.h>;
#include <stdio.h>;

FILE *file1;

int main(){
    
    // Create a file
    //file1 = fopen("C:\\Users\\gokse\\OneDrive\\Belgeler\\SourceCode\\c\\myFile.txt", "w");
    file1 = fopen("myFile.txt", "a");

    // Write some text to the file
    fprintf(file1, "\nSome text");

    // Append some text to the file
    fprintf(file1, "\nHi everybody!");


    // Close the file
    fclose(file1);

    return 0;
}