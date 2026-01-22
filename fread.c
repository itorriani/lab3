#include <stdio.h>;

int freadFile(char* fileName, char contents[], int bytes)
{

    FILE* file = fopen(fileName, "r"); //open file with fopen

    size_t n; // for file reading until eof purposes

    if (file == NULL) //check if error with file argument
    {
        perror("Error opening file"); // state the error
    }

    while((n=fread(contents, 1, bytes, file)) > 0) { }; //read until the end of file

    fclose(file); // close the file for memory related issues

    return 0; 

}




