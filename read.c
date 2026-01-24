#include <stdio.h> 
#include <stdlib.h>
#include <fcntl.h>   
#include <unistd.h>  
#ifndef CONTENT_SIZE
#define CONTENT_SIZE 500
#endif


int main(int argc, char *argv[1])
{

    char contents[CONTENT_SIZE];

    int file = open(argv[1], O_RDONLY); //open a file with read

    ssize_t bytes_read;

    while ((bytes_read=read(file, contents, CONTENT_SIZE)) > 0) { }; // use read functionality 

    contents[bytes_read] = '\0'; // null terminate the contents

    close(file); // close file for memory leaking related issues

    return 0;
}