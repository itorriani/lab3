#include <stdio.h> 
#define ARRAY_SIZE 500; 


char *readFile(char* fileName, int bytes)
{

    char contents[bytes]; // define a space for the file's contents, with custom bytes

    char ch; 

    int idx = 0; // initialize index to iterate through contents

    FILE *fptr; // set up file reading

    fptr = fopen(fileName, "r"); // open the file in read mode

    while (ch=getc(fptr) != EOF)
    {
        contents[idx] = ch; // write to contents

        idx++; // increment index
    }

    return contents;

}