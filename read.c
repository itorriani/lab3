#include <stdio.h> 
#include <stdlib.h>
#include <fcntl.h>   
#include <unistd.h>  
#ifndef CONTENT_SIZE
#define CONTENT_SIZE 500
#endif


int main(int argc, char *argv[1])
{

    int cs = atoi(argv[2]);

    char contents[cs]; // allow customizability of bytes read

    int file = open(argv[1], O_RDONLY); //open a file with read

    if (file < 0)
    {
        printf("%s", "file didn't open");
    }

    ssize_t bytes_read;

    while ((bytes_read=read(file, contents, cs)) > 0) { }; // use read functionality 

    contents[bytes_read] = '\0'; // null terminate the contents

    close(file); // close file for memory leaking related issues

    return 0;
}