#include <stdio.h> 
#include <stdlib.h>
#define ARRAY_SIZE 500;    


char *readFile(char* fileName, char contents[], int bytes)
{
    int file = open(fileName, "r"); //open a file with read

    ssize_t bytes_read = read(file, contents, sizeof(contents)-1); // use read system call to read the file

    contents[bytes_read] = '\0'; // null terminate the contents

    close(file); // close file for memory leaking related issues

    return 0;
}