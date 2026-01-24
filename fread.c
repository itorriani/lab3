#include <stdio.h>
#define CONTENT_SIZE 500

int main(int argc, char *argv[1])
{
    char* contents[CONTENT_SIZE];

    FILE* file = fopen(argv[1], "r"); //open file with fopen

    size_t n; // for file reading until eof purposes

    while((n=fread(contents, 1, CONTENT_SIZE, file)) > 0) { }; //read until the end of file

    fclose(file); // close the file for memory related issues

    return 0; 

}




