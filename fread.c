#include <stdio.h>
#ifndef CONTENT_SIZE
#define CONTENT_SIZE 500
#endif


int main(int argc, char *argv[1])
{

    int cs = atoi(argv[2]);

    char contents[cs];

    FILE* file = fopen(argv[1], "r"); //open file with fopen

    size_t n; // for file reading until eof purposes

    while((n=fread(contents, 1, cs, file)) > 0) { }; //read until the end of file

    fclose(file); // close the file for memory related issues

    return 0; 

}




